#include <stdio.h>

// Function to perform binary search
// Returns the index of the element if found, otherwise returns -1
int binarySearch(int array[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Prevents potential integer overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (array[mid] == target) {
            return mid;
        }

        // If target is greater, ignore the left half
        if (array[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // Note: The input array MUST be sorted for binary search to work
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 23;

    int result = binarySearch(array, size, target);

    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}

