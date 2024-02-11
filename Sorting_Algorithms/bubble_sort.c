#include <stdio.h>

/* 
   Bubble Sort Algorithm - Best Case:
   In the best case scenario, when the array is already sorted, 
   this version of bubble sort stops early because it notices 
   that no swaps are needed. This makes it faster.
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
        // If no two elements were swapped, then the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

/* 
   Bubble Sort Algorithm - Average Case:
   In the average case scenario, when the array is randomly ordered, 
   this version of bubble sort compares adjacent elements and swaps 
   them if they are in the wrong order.
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
   In the worst case scenario, when the array is sorted in reverse order, 
   this version of bubble sort compares adjacent elements and swaps 
   them if they are in the wrong order. It makes the maximum number 
   of comparisons and swaps.
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

