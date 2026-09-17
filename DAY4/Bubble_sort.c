/*Programme to perform bubble sort operation in an array*/
#include<stdio.h>
int iteration(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int arr[],int size){
    for(int step=0 ; step<size-1; step++){
        for(int i=0; i<size-step-1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        iteration(arr,size);

    }
}
int main(){
    int data[]={6,4,7,8,1,9,5};
    int size=sizeof(data)/sizeof(data[0]);
    bubble_sort(data,size);
    printf("Sorted Array:\n");
    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    return 0;
}