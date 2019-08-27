#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main ()
{
	
	FILE * fp;
   
	int i, j, k, arr[10000]; 
	
	for(i=0;i<10000;i++){
		arr[i] = i;
  	}
	
  	for(i=0;i<1000;i++){
	  	k = rand()%10000+1;
  		j = rand()%10000+1;
  		swap(&arr[k], &arr[j]);
  	}
	  	
	for(i=0;i<10000;i++){
		printf("%d\n",arr[i]);
  	}
	fp = fopen ("random.txt", "w+");
	
	fprintf(fp,"10000");
	for(i=0;i<10000;i++){
		fprintf(fp,"%d\n",arr[i]);
  	}

   	fclose(fp);
  	
	return 0;
}
