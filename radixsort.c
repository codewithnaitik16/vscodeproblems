#include <stdio.h>

// Helper function to find the maximum value in the array.
// This determines how many digit positions need to be processed.
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// A stable subroutine function to perform counting sort on the array
// based on a specific digit position represented by 'exp' (1, 10, 100, etc.)
void countingSort(int arr[], int n, int exp) {
    int output[n]; // Temporary output array to store sorted elements
    int count[10] = {0}; // Initialize count array for digits 0-9

    // Store the count of occurrences of each digit at the current place value
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Transform count[i] so that it contains the actual position 
    // of this digit in the output array
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the sorted output array by traversing the original array in reverse order.
    // Reversing ensures that the sorting remains stable.
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the sorted elements from the output array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// The main Radix Sort function
void radixSort(int arr[], int n) {
    // Find the maximum number to know the maximum number of digits
    int max = getMax(arr, n);

    // Apply counting sort for every digit position. 
    // exp is 10^i where i is the current digit position (1s, 10s, 100s...)
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

// Helper function to print the contents of the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    // Perform Radix Sort
    radixSort(arr, n);

    printf("\nSorted array:\n");
    printArray(arr, n);

    return 0;
}
