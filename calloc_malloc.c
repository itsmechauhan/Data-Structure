#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr=NULL){
        printf("Memory allocation Failed!!\n");
        return 0;
    }
    else{
        printf("Enter elements: ");
        for(int i=0;i<n;i++){
            scanf("%d",arr[i]);
        }
        //printf
        printf("\nThe input array is : ");
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        return 0;
    }
}