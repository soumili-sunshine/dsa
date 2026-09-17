#include <stdio.h>
int access_elements (int *ptr, int size) {
    printf("Accessing array elements using pointer:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
    return 0;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("access_elements function is called with array and its size:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
    printf("\n");
    access_elements(arr, size);
    return 0;
}