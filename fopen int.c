#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int i;
    int n;
  	FILE *fpr;
    fpr=fopen("file.txt","r");
    fscanf(fpr,"%d",&n);
    int arr[n];
    
    for (i=0;i<n;i++){
        fscanf(fpr,"%d",&arr[i]);
    }   
    printf("%d\n",n);
    for (i=0;i<n;i++){
        printf("%d\n",arr[i]); 
    }  
    return 0;
}
