#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	node *next;
}*head=NULL,*temp,*prevnode,*newnode,*nextnode;

int count=0;
void create();
void traverse();
struct node * reverse(struct node*);

int main(){
	create();
	traverse();
	head=reverse(head);
	
	traverse();
}

void create(){
	int n;
	printf("Enter the size of the LL: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data : ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL){
		head =newnode;
		temp=newnode;
		}
		else{
			temp->next =newnode;
			temp=newnode;
		}
	}
	
}
void traverse(){
	printf("\nLL :  ");
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
struct node* reverse(struct node *head){
	prevnode=NULL;
	nextnode=NULL;
	while(head!=NULL){
		nextnode=head->next;
		head ->next=prevnode;
		prevnode=head;
		head=nextnode;
	}
	head=prevnode;
	return head;
}