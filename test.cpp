#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node{
	int data;
	node* next;
}*tail=NULL,*newnode,*temp;
void create();
void traverse();
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
int main(){
create();
traverse();
// insert_beg();
// traverse();
// insert_end();
// traverse();`
// insert_pos();
// traverse();
delete_beg();
traverse();
}
void create(){
	int n;
	printf("Enter the size of CLL:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		newnode=(struct node*)malloc(sizeof(node));
		newnode->next=NULL;
		printf("Enter DATA: ");
		scanf("%d",&newnode->data);
		count++;
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
void traverse(){
	temp=tail->next;
	do{
		printf(" %d",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);
	
}

void insert_beg(){
printf("\n\nInserting new node at the starting of cLL \n");
newnode=(struct node*)malloc(sizeof(node));
printf("\nEnter DAta to insert at begining: ");
scanf("%d",&newnode->data);

newnode->next=tail->next;
tail->next=newnode;
}

void insert_end(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter Data to insert at Last node: ");
scanf("%d",&newnode->data);
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}

void insert_pos(){
	int idx,i=1;
	printf("\nEnter Pos where you want to insert data: ");
	scanf("%d",&idx);
	temp=tail->next;
	while(i<idx-1){
		temp=temp->next;
		i++;
	}
	newnode=(struct node*)malloc(sizeof(node));
	printf("\nEnter Data to insert at node-> %d : ",idx);
	scanf("%d",&newnode->data);
	count++;
	newnode->next=temp->next;
	temp->next=newnode;
}
void delete_beg(){
	temp=tail->next;
	printf("\nDeleting the first node! \n");
	tail->next=temp->next;
	free(temp);
}
void delete_end(){
	temp=tail->next;
	do{
		temp=temp->next;
	}while(temp->next!=tail->next);
	temp->next=tail->next;
	

}