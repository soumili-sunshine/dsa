/*Write a programme to perform linear search in an array using pointers*/

#include<stdio.h>

int linear_search(int *arr, int size, int key) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr);
    int key = 30;
    int index = linear_search(arr, size, key);
    if(index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}