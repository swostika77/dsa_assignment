#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Heapify function for Max Heap 
void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

//Heapify function for Min Heap 
void minHeapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] < arr[smallest])
        smallest = left;

    if(right < n && arr[right] < arr[smallest])
        smallest = right;

    if(smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

/* Build Max Heap */
void buildMaxHeap(int arr[], int n) {
    for(int i = n/2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

/* Build Min Heap */
void buildMinHeap(int arr[], int n) {
    for(int i = n/2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

void display(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    int arr[100], minHeap[100], maxHeap[100];

    printf("Enter number of elements to build max heap and min heap: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Copy array for min and max heap
    for(int i = 0; i < n; i++) {
        minHeap[i] = arr[i];
        maxHeap[i] = arr[i];
    }

    buildMinHeap(minHeap, n);
    buildMaxHeap(maxHeap, n);

    printf("Min Heap: ");
    display(minHeap, n);

    printf("Max Heap: ");
    display(maxHeap, n);

    return 0;
}
