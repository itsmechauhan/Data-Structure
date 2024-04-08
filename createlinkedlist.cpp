#include<iostream> 
//#include<cstdlib> 
using namespace std;
void create();            
void traverse();  
 
struct node{   
int data; 
struct node *next; 
}; 
struct node *head, *newnode, *temp;   
 
int main(){ 
create(); 
traverse(); 
} 
 
void create (){ 
int i,n; 
head=NULL; 
cout<<"Enter the size of linked list: ";
cin>>n;

for(i=1;i<=n;i++){ 
newnode = (struct node*)malloc(sizeof(struct node)); 
cout<<"Enter data : "; 
cin>>newnode->data; 
newnode->next = NULL; 
 
if(head==NULL) 
{ 
    head = newnode; 
    temp = newnode; 
} 
else{ 
 temp->next = newnode; 
 temp= newnode; 
    } 
    } 
} 
 
//Traversing Link List 
void traverse(){ 
temp = head; 
while ( temp != NULL){ 
printf ("%d\n", temp -> data); 
temp = temp->next; 
} 
} 