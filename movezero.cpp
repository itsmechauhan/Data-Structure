#include<iostream>
using namespace std;
void move_to_end(int*,int);
int main(){
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	cout<<"Initial array : ";
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	move_to_end(arr,n);
	
	
	cout<<"\nMoved array :";
	for(int i=0;i<n;i++){

	cout<<arr[i]<<" ";
}

}

void move_to_end(int *arr,int n){
	
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			for(int j=0+i;j<n;j++){
				if(arr[j]!=0){
					arr[i]=arr[j];
					arr[j]=0;
					break;
				}
			}
			
		}

	}

}
