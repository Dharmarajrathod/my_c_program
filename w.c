#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks :- ");
	scanf("%d",&marks);
	if(marks>=0 && marks<=30){
		printf("Fail");
	}
	else if(marks>30 && marks<=100) {
		printf("Pass");
	}
	else{
		printf("Wrong marks");
	}
	printf("\nThe marks was :- %d ",marks);

}