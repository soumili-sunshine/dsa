/*Linear Search*/

#include<stdio.h>
int linear_search(int arr[], int size, int index, int key){
        if(index>=size){
            return -1;
        }
        if(arr[index]==key){
            return index;
        }
        return linear_search(arr, size, index + 1, key);
}
int main(){
    int arr[5]={5,6,7,9,8};
    int size=5;
    int key=7;
    int result = linear_search(arr, size, 0, key);
    if(result != -1){
        printf("Element found at index %d", result);
    } else {
        printf("Element not found");
    }
    return 0;
}