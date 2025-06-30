
#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
    int n;
    printf("enter size of array =");
    scanf("%d",&n);
    int *array;
    array=(int*)malloc(n*sizeof(int));
    if(array==NULL){
        printf("the memory are not allloctaed");
    }
    else{
        printf("the memory are allocated\n");
    
    for(int i=0;i<n;i++){
        printf("enter a number at index %d =",i);
        scanf("%d",&array[i]);
    }
}
 for(int i=0;i<n;i++){
        printf("the number at index %d is= %d\n",i,array[i]);
        
    }
    return 0;
}
