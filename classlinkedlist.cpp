#include<iostream>
using namespace std;
int count=1;
class node{
    public:
    
    int data;
    node *next;
    node *temp;
    void APPEND(*temp){
        

        node *newnode=(node*)malloc(sizeof(node));
        temp->next=newnode;
        cout<<"Enter the Data: ";
        cin>>newnode->data;
        newnode->next=NULL;
         temp->next=newnode;
            temp=newnode;
        count++;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    node *head=NULL,*newnode,*temp;
    

    for(int i=0;i<n;i++)
    {
        count++;
        newnode=(node*)malloc(sizeof(node));
        cout<<"Enter the Data: ";
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }}
        //transversing the linked list
        newnode->APPEND(temp->next);
        newnode->APPEND(temp->next);
        newnode->APPEND(temp->next);
        newnode->APPEND(temp->next);
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    return 0;

}