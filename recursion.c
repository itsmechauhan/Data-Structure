#include<stdio.h>
int search(int arr[10][10],int ,int,int);
void main(){
	int r,c;
	printf("Enter row:  ");
	scanf("%d",&r);
	printf("enter Cols : ");
	scanf("%d",&c);
	int array[r][c];
	printf("Enter the elements in the Array: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&array[i][j]);
		}
	}

int target;
printf("enter the Target element: ");
scanf("%d",&target);
search(array,r,c,target);
}
 int search(int array[10][10],int r,int c,int target){
 	int z=0;
 	for(int i=0;i<r;i++){
 		for(int j=0;j<c;j++){

 			if(array[i][j]==target)
 				{
 					z++;
 					printf("Element is present");
 		}
 	}
 }
 	if(z==0)printf("Elemet is not present");
 	return 0;
 }