#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    // Traverse the array sequentially
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int size, key, result;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get the array elements from the user
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to search for
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Call the linear search function
    result = linearSearch(arr, size, key);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index %d (position %d).\n", key, result, result + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
