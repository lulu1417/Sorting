#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int *arr, int front, int end){
    int pivot = arr[end];
    int i = front -1, j;
    for (j = front; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}

void QuickSort(int *arr, int front, int end){
    if (front < end) {
        int pivot = Partition(arr, front, end);
        QuickSort(arr, front, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }
}

int main() {

    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
    }
    
    QuickSort(arr, 0, n-1);
    
    printf("%d\n",n);
    for (i = 0; i < n; i++) {
        printf("%d\n",arr[i]);
    }

    return 0;
}
