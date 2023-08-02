#include<stdio.h>
int main(){
	int number;
	printf("Enter number :- ");
	scanf("%d",&number);
	if(number>=0){
		printf("\nNumber is postive");
		if(number%2==0){
			printf("\nNumber is even");
		}
		else{
			printf("\nNumber is odd");
		}
	}
	else {
		printf("Number is negative");
			if(number%2==0){
				printf("\nNumber is even");
		}
		else{
			printf("\nNumber is odd");
		}
	}

}