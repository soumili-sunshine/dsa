#include<stdio.h>

int print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void iteration(int arr[], int high) {
    for(int i = 0; i <= high; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high, int size) {
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]); 
        }
    }
    swap(&array[i + 1], &array[high]);

    static int step = 1;
    printf("Step %d: ", step++);
    for (int k = 0; k < size; ++k) {
        printf("%d ", array[k]);
    }
    printf("\n");

    return (i + 1);
}

void quickSort(int array[], int low, int high, int size) {
    if (low < high) {
        int pi = partition(array, low, high, size);
        quickSort(array, low, pi - 1, size);
        quickSort(array, pi + 1, high, size);
    }
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
        break;
        print_array(arr,size);
    }
}
int main() {
    int data[] = {2, 9, 7, 8, 5, 4, 1};
    int size = sizeof(data) / sizeof(data[0]);
    bubble_sort(data,size);
    quickSort(data, 0, size - 1, size);
    printf("Sorted Array:\n");
    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    return 0;
}