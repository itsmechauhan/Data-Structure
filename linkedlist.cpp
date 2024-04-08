#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL,*newnode,*prevnode,*temp;
int count = 0;
void create();
void transverse();
int main(){
    create();
    transverse();
}
void create(){
    int n;
    printf("Enter the size of linked list: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        count++;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data at node %d : ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
}
void transverse(){
    int i = 1;
    temp = head;
    while(temp != NULL){
        printf("\nData stored at node %d is : %d", i, temp->data);
        temp = temp->next;
        i++;
    }
    printf("\nThe length of linked list is : %d\n", count);
}