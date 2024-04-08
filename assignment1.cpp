#include<stdio.h>
int main(){
    int n;
    printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	int k=n/2;
	//first half of array
	//the size will be k 
	int firsthalf[k];
	/*the size of second half will be n-k
	because if n is odd no  let 7 then the array will be splitted in 2 parts of size 3,4  then k=3 so secondhalf must be 4
	that's why we have taken size of secondhalf n-k (7-3=4) */
	int secondhalf[n-k];
	printf("Taking input in array !\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//storing values in firsthalf
	for(int i=0;i<k;i++)firsthalf[i]=arr[i];
	//storing values in secondhalf	
	for(int i=k,j=0;i<n,j<n-k;i++,j++)secondhalf[j]=arr[i];	
	//Printing values of firsthalf
	printf("First half array is:");
    for(int i=0;i<k;i++)printf("%d ",firsthalf[i]);
    //Printing values of secondhalf
    printf("\nSecond Half of Array is: ");
    for(int i=0;i<n-k;i++)printf("%d ",secondhalf[i]);	
    return 0;	


}