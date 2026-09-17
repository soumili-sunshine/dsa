/*Programme to perform selection sort operation in an array*/
#include<stdio.h>
int iteration(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void selection_sort(int arr[],int size){
    for(int step=0; step<size-1; step++){
        int min_index = step;
        for(int i=step+1; i<size; i++){
            if(arr[i] < arr[min_index]){
                min_index = i;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[step];
        arr[step] = temp;

        iteration(arr,size);
    }
}
int main(){
    int data[]={6,4,7,8,1,9,5};
    int size=sizeof(data)/sizeof(data[0]);
    selection_sort(data,size);
    printf("Sorted Array:\n");
    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    return 0;
}