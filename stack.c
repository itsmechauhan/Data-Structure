#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,n,TOP=-1;
	printf("Enter stack size: ");
	scanf("%d",&n);
	int stack[n-1];
	while(1){

		printf("\n\nChoices available\n1.Push \n2.Pop \n3.display \n4.Exit\nEnter your choice: ");
		scanf("%d",&x);
		switch(x){
			
		case 1:
		if(TOP>=n){
			printf("Overflow !! ");
			exit(0);
		}
		else{
			TOP++;
			printf("\nEnter Element: ");
			scanf("%d",&stack[TOP]);
		}

			break;
		
		case 2:
		if(TOP<=-1){
			printf("\nUnderflow!!");
			exit(0);
		}
		else{
			printf("\nElement Popped successfully! ");
			TOP=TOP-1;
		}
		    break;
		
		case 3:
		    printf("\nElements in the Stack are : ");
		    for(int i=0;i<=TOP;i++){
		    	printf("%d ",stack[i]);
		    }
		    break;
		case 4:
			exit(0);
		    break;
		default:
			printf("\nWrong Choice!!\n");
		    break;            	
		}
	
	}
}
