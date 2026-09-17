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
    int n;
    printf("Select the sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Bubble Sort\n");
            bubble_sort(data,size);
            break;
        case 2:
            printf("Selection Sort\n");
            selection_sort(data,size);
            break;
        case 3:
            printf("Insertion Sort\n");
            insertion_sort(data,size);
            break;
        default:
            printf("Invalid option selected\n");
    }
    printf("Sorted Array:\n");
    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    return 0;
}