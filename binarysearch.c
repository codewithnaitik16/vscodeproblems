
    int result = binarySearch(array, size, target);

    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}

