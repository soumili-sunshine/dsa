/*Traversing an array */
#include<stdio.h>

void traverseArray(int arr[], int size)
{
    printf("Elements of the array are: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);

    traverseArray(arr, size);

    return 0;
}
