/*Modified Bubble Sort*/
#include<stdio.h>
int iteration(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void modified_bubblesort(int arr[],int size){
    int flag=0;
    for(int step=0 ; step<size-1; step++){
        for(int i=0; i<size-step-1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                flag++;
            }
        }
        if(flag==0){
            printf("Array is already sorted\n");
            break;
        }
        iteration(arr,size);

    }
}
int main(){
    int data[]={2,9,7,8,5,4,1};
    int flag=0;
    int size=sizeof(data)/sizeof(data[0]);
    modified_bubblesort(data,size);
    printf("Sorted Array:\n");
        for(int i=0; i<size; i++){
            printf("%d ",data[i]);
        }
    return 0;
}