# Question 8: Sorting Random Integers Using Different Sorting Algorithms

## Data Structure Used
We used a **one-dimensional array** to store integers.

- The array stores **N random integers** in the range `[1, 1000]`
- `N` is provided by the user at runtime
- A temporary array is used to preserve the original unsorted data

---

## Sorting Algorithms Implemented

The program allows the user to choose one of the following sorting algorithms:

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**
4. **Merge Sort**

For each algorithm:
- The array is sorted
- The total number of **comparisons** is counted
- The total number of **swaps or movements** is counted

---

## Functions Description

1. `void bubbleSort(int arr[], int n)`  
   - Repeatedly compares adjacent elements  
   - Swaps them if they are in the wrong order  
   - Counts comparisons and swaps  

2. `void selectionSort(int arr[], int n)`  
   - Selects the smallest element from the unsorted portion  
   - Places it at the correct position  
   - Counts comparisons and swaps  

3. `void insertionSort(int arr[], int n)`  
   - Inserts each element into its correct position  
   - Shifts elements as needed  
   - Counts comparisons and shifts as swaps  

4. `void mergeSort(int arr[], int l, int r)`  
   - Uses divide-and-conquer approach  
   - Recursively divides the array and merges sorted subarrays  
   - Counts comparisons and array write operations  

5. `void display(int arr[], int n)`  
   - Displays array elements before and after sorting  

---

## Main Function Overview

1. Takes input `N` (number of elements)  
2. Generates `N` random numbers in range `[1,1000]`  
3. Displays the **original array**  
4. Asks the user to choose a sorting algorithm  
5. Sorts the array using the selected algorithm  
6. Displays:
   - Sorted array  
   - Total number of comparisons  
   - Total number of swaps (or movements)

This demonstrates the **performance difference** between sorting algorithms.

---

## Sample Inputs and Outputs
*FOR BUBBLE SORT*  
Enter number of elements: 8  
Original array:  
36 392 725 261 922 453 655 109   

Choose sorting algorithm:  
1. Bubble Sort  
2. Selection Sort  
3. Insertion Sort  
4. Merge Sort  
1
Bubble Sort:  
Sorted array:  
36 109 261 392 453 655 725 922  
Total comparisons: 28  
Total swaps: 12  


---

*FOR SELECTION SORT*
Enter number of elements: 7  
Original array:  
425 501 642 980 172 982 589  

Choose sorting algorithm:  
1. Bubble Sort  
2. Selection Sort  
3. Insertion Sort  
4. Merge Sort  
2
Selection Sort:  
Sorted array:  
172 425 501 589 642 980 982  
Total comparisons: 21  
Total swaps: 5  

---

*FOR INSERTION SORT*
Enter number of elements: 9  
Original array:  
467 390 500 123 190 494 283 924 397  

Choose sorting algorithm:  
1. Bubble Sort  
2. Selection Sort  
3. Insertion Sort  
4. Merge Sort  
3
Insertion Sort:  
Sorted array:  
123 190 283 390 397 467 494 500 924  
Total comparisons: 22  
Total swaps: 16  

---

*FOR MERGE SORT*
Enter number of elements: 6  
Original array:  
530 2 239 574 559 565  

Choose sorting algorithm:  
1. Bubble Sort  
2. Selection Sort  
3. Insertion Sort  
4. Merge Sort  
4
Merge Sort:  
Sorted array:  
2 239 530 559 565 574  
Total comparisons: 9  
Total swaps: 16  


---

## Notes and Observations

- Random numbers are generated using `rand()` function  
- Bubble Sort performs maximum comparisons for larger inputs  
- Selection Sort minimizes swaps  
- Insertion Sort performs well for nearly sorted data  
- Merge Sort is efficient with time complexity **O(n log n)**  
- Comparison and swap counts help analyze algorithm efficiency  
- This program clearly demonstrates **sorting behavior and performance**

