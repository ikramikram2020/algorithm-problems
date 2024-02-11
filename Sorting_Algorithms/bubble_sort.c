#include <stdio.h>

// Swap function
void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Exit with error code 1
    }

    int arr[N];
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Call bubbleSort function to sort the array
    bubbleSort(arr, N);

    printf("Sorted array: ");
    printArray(arr, N);

    return 0;
}

