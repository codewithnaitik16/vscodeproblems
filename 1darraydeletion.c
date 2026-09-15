#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;                          
    int delete_index;                    

    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    delete_index = 2; 

    
    if (delete_index < 0 || delete_index >= n) {
        printf("Invalid index! Deletion not possible.\n");
    } else {
        
        for (int i = delete_index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        
        n--;

        
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
