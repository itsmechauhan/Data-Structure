#include <iostream>
using namespace std;
int address(int*);
int main(){
	int I,J,lbr,lbc;
	cout<<"Enter lbr: ";
	cin>>lbr;
	cout<<"Enter lbc: ";
	cin>>lbc;
	cout<<"Enter last idx row no: ";
	cin>>I;
	cout<<"Enter last idx cols no: ";
	cin>>J;

	int arr[I-lbr][J-lbc];
	for(int i=lbr;i<I;i++){
		for(int j=lbc;j<J;j++){
			arr[i][j]=i+j;
		}
	}
	cout<<"\nTotal  no of Rows: "<<I-lbr;
	cout<<"\nTotal no of Cols: "<<J-lbc;
	int i,j;
	cout<<"\nEnter index row no Arr[i]:";
	cin>>i;
	cout<<"\nenter index col no Arr["<<i<<"]: ";
	cin>>j;
	int s=sizeof(int);
	cout<<"Size: "<<s;
	cout<<"\ni="<<i<<endl;
	cout<<"j="<<j<<endl;

	int *BA;
	int M=I-lbr;

	int x=M*(j-lbc);
	cout<<"\nM*(j-lbc)= "<<x;
	int n=(i-lbr);
	cout<<"\n s*(i-lbr)="<<n;
	int totalsize=s*(n+x);
	int *address=&arr[i][j];
	BA=address-totalsize;
	cout<<"\nAddress of ["<<i<<"]["<<j<<"]<<"<<(int)address;
	cout<<"\nBase address: "<<(int)BA;
	cout<<" Difference: "<<(int)address-(int)BA;
	return 0;

}