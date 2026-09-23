#include <stdio.h>


int linearSearch(int arr[], int size, int key) {
 
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size, key, result;

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

   
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the number to search: ");
    scanf("%d", &key);


    result = linearSearch(arr, size, key);

  
    if (result != -1) {
        printf("Element %d found at index %d (position %d).\n", key, result, result + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
