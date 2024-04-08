#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*temp,*tail,*newnode;
int count=0,n;
void create();
void insert_end();
void delete_beg();
void delete_end();
void delete_pos();
void insert_beg();
void insert_pos();
void transverse();

int main(){
	create();
	transverse();
	/*insert_beg();
	transverse();
	insert_pos();
	transverse();
	insert_end();
	transverse();
	delete_beg();
	transverse();
	delete_end();
	transverse();
	delete_pos();
	transverse();
	*/
	}
void create(){
	tail=NULL;
	cout<<"Enter the size of Circular LL: ";
	cin>>n;

	for(int i=1;i<=n;i++){
		count++;
		newnode=(node*)malloc(sizeof(node));
		cout<<"Enter data at node "<<i<<" : ";
		cin>>newnode->data;
		newnode->next=NULL;
		if(tail==NULL){
			tail=newnode;
			tail->next=newnode;
		}
		else{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
	}
}

void transverse(){
//transversing the linked list
	int i=1;
	temp=tail->next;
	do{
	
		cout<<"\nData stored at node "<<i<<" is : "<<temp->data;
		i++;
		temp=temp->next;
	}
	while(temp!=tail->next);
	cout<<"\nThe length of linked list is : "<<count<<endl;
}

