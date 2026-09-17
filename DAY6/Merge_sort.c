/*Programme to perform merge sort operation*/
#include <stdio.h>
void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int p, int q, int r) {
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1];
    int M[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l+(r-l)/2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main() {
    int data[] = {2, 9, 7, 8, 5, 4, 1};
    int size = sizeof(data) / sizeof(data[0]);
    int l = 0;
    int r = size - 1;
    int q = (l + r) / 2;

    merge_sort(data, l, r);

    printf("Sorted Array:\n");
    print_array(data, size);
    return 0;
}