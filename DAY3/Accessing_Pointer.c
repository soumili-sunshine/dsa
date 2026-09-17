/*accessing elements of a particular index using function from an array using pointers*/

#include<stdio.h>

int access_element(int *arr, int size, int index) {
    if (index >= 0 && index < size) {
        return *(arr + index);
    } else {
        printf("Invalid index!\n");
        return -1;
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;
    printf("Enter the index of the element you want to access: ");
    scanf("%d", &index);

    int element = access_element(arr, size, index);
    if (element != -1) {
        printf("Element at index %d: %d\n", index, element);
    }

    return 0;
}