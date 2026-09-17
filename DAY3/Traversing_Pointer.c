/*write a programme to traverse elements in an array using pointers*/

#include<stdio.h>
int traverse_array(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, *(arr + i));
    }
    return 0;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    traverse_array(arr, size);
    return 0;
}