#include<iostream>
using namespace std;
int tower_of_hanoi(char src,char helper,char dest,int n);
int main(){
	int n;
	cout<<"Enter N: ";
	cin>>n; 
  
    // A, B and C are names of rods 
    tower_of_hanoi("source","helper","Destination",n); 
    return 0; 
} 
int tower_of_hanoi(char src,char helper,char dest,int n){

    if (n == 0) { 
        return; 
    } 
    tower_of_hanoi("source", "helper", "Destination ",n-1); 
    cout << "Move disk " << n << "From rod" << "Source" 
         << "  " << "Destination " << endl; 
    tower_of_hanoi("helper", "Destination ", "source",n-1); 
} 
