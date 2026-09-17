/*Insert an element into an array*/
#include<stdio.h>

int insertElement(int arr[], int size, int key, int pos){
    if(pos < 0 || pos > size){
        printf("Invalid position\n");
        return size;
    }
    for(int i = size; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    printf("Element inserted successfully\n");
    return size + 1;
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 10;
    int pos = 2;
    size = insertElement(arr, size, key, pos);
    printf("Array after insertion: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}