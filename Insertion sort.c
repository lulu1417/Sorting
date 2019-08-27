#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n){
	
	int i, j, key;
	
	for (j=1;j<n;j++){
		key = arr[j];
		i = j-1;
		while(i>=0 && key<arr[i]){
				arr[i+1] = arr[i];
				i = i-1;
		} 
		arr[i+1] = key;
	}
	
}

int main(){
	
	int n, i;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
			
		scanf("%d",&arr[i]);
	}
	
	insertionSort(arr, n); 

	printf("%d\n",n);

	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
    return 0;	
} 

