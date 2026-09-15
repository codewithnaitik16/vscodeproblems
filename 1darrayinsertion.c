#include <stdio.h>

#define MAX_SIZE 100 
int main() {
    int arr[MAX_SIZE];
    int size, i, element, index;

   
    printf("Enter current number of elements (max %d): ", MAX_SIZE - 1);
    scanf("%d", &size);

    if (size >= MAX_SIZE) {
        printf("Error: Array size exceeds maximum capacity.\n");
        return 1;
    }

   
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the index position (0 to %d): ", size);
    scanf("%d", &index);

  
    if (index < 0 || index > size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", size);
        return 1;
    }

    
    for (i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[index] = element;

   
    size++;

   
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
