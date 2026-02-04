# Question 3: Reverse Traversal of a Linked List

## Data Structure Used
We used a **singly linked list** to store integer data.

- Each node contains:
  - `data` → stores the integer value
  - `next` → pointer to the next node
- The list is traversed using pointers
- Reverse traversal is implemented using **recursion**

---

## Functions Description

1. `struct Node* createNode(int data)`  
   - Creates a new node using dynamic memory allocation  
   - Initializes `data` and sets `next` to `NULL`  
   - Returns the address of the newly created node  

2. `void appendNode(struct Node** head, int data)`  
   - Inserts a new node at the **end of the linked list**  
   - If the list is empty, the new node becomes the head  
   - Otherwise, it traverses to the last node and links the new node  

3. `void displayList(struct Node* head)`  
   - Traverses the linked list from head to end  
   - Prints the elements in **normal (forward) order**  

4. `void reverseTraversal(struct Node* head)`  
   - Implements **reverse traversal** using recursion  
   - First recursively visits the next node  
   - Prints the data while returning from recursion  
   - This results in elements being printed in **reverse order**

---

## Main Function Overview

- Initializes an empty linked list (`head = NULL`)  
- Inserts elements into the list using `appendNode()`  
- Displays the linked list in normal order  
- Calls `reverseTraversal()` to display the list in reverse order  

This approach clearly demonstrates the **reverse traversal algorithm**.

---

## Sample Output
Original Linked List: 10 20 30 40
Reverse Traversal: 40 30 20 10

---

## Notes and Observations

- Reverse traversal is achieved **without modifying the linked list**  
- Recursion allows visiting nodes from last to first naturally  
- The program uses **dynamic memory allocation** for node creation  
- Maximum recursion depth depends on the number of nodes  
- This method is efficient and commonly used for reverse traversal problems  

