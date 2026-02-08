#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int comparisons = 0;
int swaps = 0;

// Swap function 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++;
}

//Bubble Sort 
void bubbleSort(int arr[], int n){
    comparisons = swaps = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            comparisons++;
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

//Selection Sort 
void selectionSort(int arr[], int n){
    comparisons = swaps = 0;
    for(int i = 0; i < n-1; i++){
        int min_idx = i;
        for(int j = i+1; j < n; j++){
            comparisons++;
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i) swap(&arr[i], &arr[min_idx]);
    }
}

//Insertion Sort 
void insertionSort(int arr[], int n){
    comparisons = swaps = 0;
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0){
            comparisons++;
            if(arr[j] > key){
                arr[j+1] = arr[j];
                swaps++;
                j--;
            } else break;
        }
        arr[j+1] = key;
    }
}

// Merge Sort 
void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for(int i=0;i<n1;i++) L[i]=arr[l+i];
    for(int i=0;i<n2;i++) R[i]=arr[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        comparisons++;
        if(L[i]<=R[j]){
            arr[k++] = L[i++];
            swaps++;
        } else {
            arr[k++] = R[j++];
            swaps++;
        }
    }
    while(i<n1){ arr[k++] = L[i++]; swaps++; }
    while(j<n2){ arr[k++] = R[j++]; swaps++; }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

// Display array 
void display(int arr[], int n){
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[MAX], n, choice;
    srand(time(0));

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Original array:\n");
    for(int i=0;i<n;i++){
        arr[i] = rand()%1000 + 1;
        printf("%d ",arr[i]);
    }
    printf("\n\n");

    printf("Choose sorting algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    scanf("%d",&choice);

    int temp[n];
    for(int i=0;i<n;i++) temp[i]=arr[i]; // copy original array

    switch(choice){
        case 1: bubbleSort(temp,n); printf("Bubble Sort:\n"); break;
        case 2: selectionSort(temp,n); printf("Selection Sort:\n"); break;
        case 3: insertionSort(temp,n); printf("Insertion Sort:\n"); break;
        case 4: comparisons=swaps=0; mergeSort(temp,0,n-1); printf("Merge Sort:\n"); break;
        default: printf("Invalid choice\n"); return 0;
    }

    printf("Sorted array:\n");
    display(temp,n);

    printf("Total comparisons: %d\n", comparisons);
    printf("Total swaps: %d\n", swaps);

    return 0;
}
