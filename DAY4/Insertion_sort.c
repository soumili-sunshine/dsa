/*Programme to perform insertion sort operation in an array*/
#include<stdio.h>
int iteration(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
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
        iteration(arr,size);
    }
}
int main(){
    int data[]={2,9,7,8,5,4,1};
    int size=sizeof(data)/sizeof(data[0]);
    insertion_sort(data,size);
    printf("Sorted Array:\n");
    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    return 0;
}