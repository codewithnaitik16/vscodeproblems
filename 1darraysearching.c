#include <stdio.h>


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size, target, resultIndex;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare the 1D array

  
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

 
    printf("Enter the element to search for: ");
    scanf("%d", &target);

   
    resultIndex = linearSearch(arr, size, target);

   
    if (resultIndex != -1) {
        printf("\nSuccess! Element %d found at index position: %d\n", target, resultIndex);
        printf("Human-readable position: %d\n", resultIndex + 1);
    } else {
        printf("\nElement %d was not found in the array.\n", target);
    }

    return 0;
}
