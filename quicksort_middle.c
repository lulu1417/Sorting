#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int *arr, int front, int end){
    int pivot = arr[(end+front)/2];
    int pivot_index = (end+front)/2;
    int i = front -1, j;
    //i indicates the position of the key that all the elements in the front of it are smaller than pivot
    for (j = front; j < end+1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
            if(i ==pivot_index){
            	pivot_index = j;
			}
        }
    }
    i++;
    if(arr[i] > arr[pivot_index]){ 
    	swap(&arr[i], &arr[pivot_index]); //put pivot into the middle of the two subarrays
	}
	return i;
}

void QuickSort(int *arr, int front, int end){
    
	if (front < end) {
        int p = Partition(arr, front, end);
        QuickSort(arr, front, p - 1);
        QuickSort(arr, p + 1, end);
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

    for (i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}

