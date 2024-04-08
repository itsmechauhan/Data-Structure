#include<stdio.h>
#include<stdlib.h>
int main(){
    char ax;
    int i,j;
    printf("Enter the row length of array : ");
    scanf("%d",&i);
    printf("Enter the cols length of array: ");
    scanf("%d",&j);
    int arr[i][j],I,J,BA,s,lb=0;
    
    printf("\nEnter row index no of which you want to find address: ");
    scanf("%d",&I);
    printf("\nEnter cols index no of which you want to find address: ");
    scanf("%d",&J);
    printf("Is S(size) is Given?\nY-Yes or N-No : ");
    scanf(" %c",&ax);
    if(ax=='y'||ax=='Y')
        {
            printf("Enter Size(s) : ");
            scanf(" %d",&s);
        }
     else s=sizeof(int);   
    printf("Is lb(Lower bound) is Given?\nY-Yes or N-No : ");
    scanf(" %c",&ax);
    if(ax=='y'||ax=='Y')
        {
            printf("Enter Lower bound(lb) : ");
            // scanf(" %d",&s);
        }
    
    printf("Is BA given?? \tY-YES or N-No: ");
    scanf(" %c",&ax);
    if(ax=='y'||ax=='Y')
    {
        printf("Enter BA: ");
        scanf("%d",&BA);
        
        printf("Given that \nArray-arr[%d][%d]\n",i,j);
        printf("BA= %d\nSize(s)= %d\nlb= %d",BA,s,lb);
        int w=s*(I-lb);
        int soln=BA+(w);
        printf("\nSo s*(i-lb)= %d",w);
        printf("\nBA+ s*(i-lb)=%d",soln);
        printf("\nAddress of Arr[%d][%d]= %d",I,J,soln);

    }

}