#include <stdio.h>

// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found after checking the whole array
}

int main() {
    int size, target, resultIndex;

    // 1. Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare the 1D array

    // 2. Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Get the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // 4. Call the search function
    resultIndex = linearSearch(arr, size, target);

    // 5. Display the result
    if (resultIndex != -1) {
        printf("\nSuccess! Element %d found at index position: %d\n", target, resultIndex);
        printf("Human-readable position: %d\n", resultIndex + 1);
    } else {
        printf("\nElement %d was not found in the array.\n", target);
    }

    return 0;
}
