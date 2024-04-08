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
	int x=j-lbc;
	cout<<"\nj-lbc= "<<x;
	int n=J*(i-lbr);
	cout<<"\n N*(i-lbr)="<<n;
	int totalsize=n+x;
	int *address=&arr[i][j];
	BA=address-totalsize;
	cout<<"Address of ["<<i<<"]["<<j<<"]<<"<<(int)address;
	cout<<"\nBase address: "<<(int)BA;
	cout<<" Difference: "<<(int)address-(int)BA;
	return 0;

}