#include <stdio.h>

/* 
   Bubble Sort Algorithm - Best Case:
   In the best case scenario, the input array is already sorted. 
   This implementation of bubble sort includes an optimization 
   to stop early if no swaps are made in a pass, indicating that 
   the array is already sorted.
   Time Complexity: O(n) - Linear (with the optimization)
*/
void bubble_sort_best(int arr[], int n) {
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, then the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

/* 
   Bubble Sort Algorithm - Average Case:
   In the average case scenario, the input array is randomly ordered.
   This implementation of bubble sort iterates through the array 
   multiple times, comparing adjacent elements and swapping them 
   if they are in the wrong order.
   Time Complexity: O(n^2) - Quadratic
*/
void bubble_sort_avg(int arr[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/* 
   Bubble Sort Algorithm - Worst Case:
   In the worst case scenario, the input array is sorted in reverse order.
   This implementation of bubble sort iterates through the array, 
   comparing adjacent elements and swapping them if they are in the 
   wrong order, resulting in the maximum number of comparisons and swaps.
   Time Complexity: O(n^2) - Quadratic
*/
void bubble_sort_worst(int arr[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


