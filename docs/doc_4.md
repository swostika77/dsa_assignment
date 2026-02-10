# Question 4: Doubly Linked List (Insert and Delete)

## Introduction

A doubly linked list is a dynamic data structure in which each node contains two pointers: one pointing to the next node and another pointing to the previous node. This structure allows bidirectional traversal and efficient insertion and deletion operations.

This program demonstrates the implementation of a doubly linked list and performs insertion and deletion operations while maintaining pointer integrity.

---


## Problem Statement

The objective of this program is to implement a doubly linked list using structures in C. The program must provide functions to insert a node after a given node and delete a specific node. The implementation should demonstrate proper management of both next and previous pointers.


## Data Structure Used
We used a **doubly linked list** to store integer data.

- Each node contains:
  - `data` → stores the integer value
  - `prev` → pointer to the previous node
  - `next` → pointer to the next node
- Doubly linked list allows **traversal in both directions** and easy insertion/deletion

---

## Functions Description

1. `struct Node* createNode(int data)`  
   - Creates a new node using dynamic memory allocation  
   - Initializes `data`, `prev` and `next` pointers  
   - Returns the address of the new node  

2. `void appendNode(struct Node** head, int data)`  
   - Inserts a new node at the **end of the list**  
   - Updates `prev` and `next` pointers accordingly  
   - Handles the empty list case  

3. `void insertAfter(struct Node* head, int key, int data)`  
   - Inserts a new node **after the node with value `key`**  
   - Updates `prev` and `next` pointers to maintain the doubly linked list structure  
   - Prints a message if the `key` is not found  

4. `void deleteNode(struct Node** head, int key)`  
   - Deletes the node with the given value `key`  
   - Updates `prev` and `next` pointers of adjacent nodes  
   - Updates `head` if the deleted node is the first node  
   - Prints a message if the `key` is not found  

5. `void displayList(struct Node* head)`  
   - Traverses the list from head to end  
   - Prints all node values in order with spaces  

---

## Main Function Overview

- Initializes an empty doubly linked list (`head = NULL`)  
- Adds initial nodes using `appendNode()`  
- Displays the list in **original order**  
- Inserts a new node after a specified node using `insertAfter()`  
- Deletes a node with a specified value using `deleteNode()`  
- Displays the list after each operation to show **changes clearly**

---

## Sample Output  

Original List: 10 20 30  
After inserting 25 after 20: 10 20 25 30  
After deleing 30: 10 20 25  


---

## Notes and Observations

- Doubly linked list allows **efficient insertion and deletion** at any position  
- Proper handling of `prev` and `next` pointers is essential to maintain list integrity  
- `insertAfter()` and `deleteNode()` functions include checks for non-existing keys  
- Dynamic memory allocation (`malloc`) ensures nodes are created at runtime  
- Display function adds a space after each number for **readable output**  
- Using `\n` correctly ensures each output line is on a new line  

