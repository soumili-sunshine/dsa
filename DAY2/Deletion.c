/*Delete an element from an array*/
#include<stdio.h>

int deleteElement(int arr[], int size, int key){
    int i;
    for(i = 0; i < size; i++){
        if(arr[i] == key){
            break;
        }
    }
    if(i == size){
        printf("Element not found\n");
        return size;
    }
    for(int j = i; j < size - 1; j++){
        arr[j] = arr[j + 1];
    }
    printf("Element deleted successfully\n");
    return size - 1;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 3;
    size = deleteElement(arr, size, key);
    printf("Array after deletion: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}