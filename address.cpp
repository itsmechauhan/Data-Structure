#include <iostream>
using namespace std;
int main(){
	int I,J;
	cout<<"Enter the row length : ";
	cin>>I;
	cout<<"Enter the cols length: ";
	cin>>J;
	int arr[I][J];
	cout<<"Enter the elements in an array !! ";
	for(int i=0;i<I;i++){
		for(int j=0;j<J;j++){
			cin>>arr[i][j];
		}
	}
	int i,j,lbr=0,lbc=0;
	int s=sizeof(int);
	cout<<"Enter row index no:";
	cin>>i;
	cout<<"Enter the cols index no:";
	cin>>j;
	int *BA=&arr[0][0];
	int *address_of_i_and_j =[s*(i-lbr)+(j-lbc)];
	int address=(int)address_of_i_and_j + (int)BA;
	cout<<"Address of Arr["<<i<<"]["<<j<<"] is : "<<address_of_i_and_j;
	return 0;

}