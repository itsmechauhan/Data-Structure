//question web link
//https://www.geeksforgeeks.org/print-left-rotation-array/
#include<iostream>
using namespace std;
void leftrotate(int array[],int,int);
int main(){
	//Print left rotation of array
	int arr[]={1,3,5,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Original Array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int k1=1;
	leftrotate(arr,n,k1);
	int k2=3;
	leftrotate(arr,n,k2);
    int  k3=4;
	leftrotate(arr,n,k3);
	int  k4=6;
	leftrotate(arr,n,k4);
return 0;
}

void leftrotate(int array[],int n,int k){
	k=k%n;
	int temp[k];
	//storing value in a temporary array  
	for(int i=0;i<k;i++){
	temp[i]=(int)array[i];
	
	}

	//shifting values 
	for(int i=0;i<n-k;i++){
		array[i]=(int)array[i+k];
	}
	
	//rotating the values
	for(int i=n-k;i<n;i++){
		array[i]=temp[i-(n-k)];
	}
	//printing the final output
	cout<<"\nWhile left rotating array by k= "<<k<<" Array is :";
	for(int i=0;i<n;i++){
		cout<<(int)array[i]<<" ";
	}
}