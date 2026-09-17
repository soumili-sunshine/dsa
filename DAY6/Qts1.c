//insertion best
//quick  worst
#include <stdio.h>
void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
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
    return -1;
}
void insertion_sort(int arr[],int size){
    for(int step=1; step<size; step++){
        int key = arr[step];
        int i = step - 1;
        while(i >= 0 && key < arr[i]){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}
int main(){
    int data[]={2,9,7,8,5,4,1};
    int size=sizeof(data)/sizeof(data[0]);
    int key;
    printf("Original Array:\n");
    print_array(data, size);
    insertion_sort(data,size);
    printf("Array after Sorting:\n");
    print_array(data, size);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binary_search(data, 0, size - 1, key);
    if(result != -1){
        printf("Element found at index %d", result);
    }
    else{
        printf("Element not found");
    }
    return 0;
}