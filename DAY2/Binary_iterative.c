/*Binary Search - Recursive*/
#include<stdio.h>

int binary_search(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    }
    int mid = (low + high) / 2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        return binary_search(arr, mid + 1, high, key);
    }
    else{
        return binary_search(arr, low, mid - 1, key);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 3;
    int result = binary_search(arr, 0, size - 1, key);
    if(result != -1){
        printf("Element found at index %d", result);
    }
    else{
        printf("Element not found");
    }
    return 0;
}