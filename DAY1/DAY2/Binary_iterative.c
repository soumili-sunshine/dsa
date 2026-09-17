/*Binary Search - Iterative*/
#include<stdio.h>
int binary_search(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 3;
    int result = binary_search(arr, size, key);
    if(result != -1){
        printf("Element found at index %d", result);
    }
    else{
        printf("Element not found");
    }
    return 0;
}