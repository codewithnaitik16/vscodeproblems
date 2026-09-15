#include <stdio.h>

int main() {
    // 1. Initialize two source 1D arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    
    // Calculate the size of each array
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // 2. Define a third array large enough to hold both arrays
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];
    
    int i, j;

    // 3. Copy elements of the first array into the merged array
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    // 4. Copy elements of the second array right after the first array
    for (j = 0; j < size2; j++) {
        mergedArr[size1 + j] = arr2[j];
    }

    // 5. Print the final merged array
    printf("Merged Array: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
