# Question 6: Building Min Heap and Max Heap from an Unsorted Array

## Problem Statement

The objective of this program is to construct both a min heap and a max heap from an unsorted array of integers. The program must demonstrate the heap-building process and display the resulting heap structures.



## Data Structure Used
We used an **array-based heap** representation.

- A heap is a **complete binary tree**
- It is stored using an array for efficient indexing
- Two types of heaps are implemented:
  - **Min Heap** → Parent node is smaller than its children
  - **Max Heap** → Parent node is larger than its children

Array index relationships:
- Left child index  = `2*i + 1`
- Right child index = `2*i + 2`

---

## Functions Description

1. `void swap(int *a, int *b)`  
   - Swaps two integer values  
   - Used during heapify operations  

2. `void minHeapify(int arr[], int n, int i)`  
   - Maintains the **min heap property** at index `i`  
   - Compares the node with its children and places the smallest value at the root  
   - Uses recursion to fix the subtree  

3. `void maxHeapify(int arr[], int n, int i)`  
   - Maintains the **max heap property** at index `i`  
   - Places the largest value at the root  
   - Recursively heapifies affected subtrees  

4. `void buildMinHeap(int arr[], int n)`  
   - Builds a min heap from an unsorted array  
   - Starts heapifying from the last non-leaf node (`n/2 - 1`)  
   - Time complexity: **O(n)**  

5. `void buildMaxHeap(int arr[], int n)`  
   - Builds a max heap from an unsorted array  
   - Uses the same bottom-up approach as min heap  

6. `void display(int arr[], int n)`  
   - Prints the heap elements in array form  

---

## Main Function Overview

- Accepts number of elements from the user  
- Takes unsorted array input  
- Copies the original array into:
  - One array for **Min Heap**
  - One array for **Max Heap**
- Calls `buildMinHeap()` and `buildMaxHeap()`  
- Displays both heaps  

This approach ensures the **original data is preserved** while creating both heap types.

---

## Sample Input

Enter number of elements to build max heap and min heap: 8
Enter elements:
32
34
21
18
12 
9
10
45

---

## Sample Output  
Min Heap: 9 12 10 18 34 21 32 45  
Max Heap: 45 34 21 32 12 9 10 18


---

## Notes and Observations

- Heap construction is done in **O(n)** time using bottom-up heapify  
- Min Heap always places the **smallest element at the root**  
- Max Heap always places the **largest element at the root**  
- Array-based representation avoids extra memory overhead  
- The order of elements in heap array is **not sorted**, but follows heap rules  
- This program demonstrates both heap types clearly using the same input data  

