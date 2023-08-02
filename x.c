#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks :- ");
	scanf("%d",&marks);
	if(marks>=0 && marks<=30){
		printf("\nGrade C");
	}
	else if(marks>30 && marks<=70) {
		printf("\nGrade B");
	}
	else if(marks>70 && marks<=90) {
	printf("\nGrade A");
	}
	else{
		printf("\nGrade A+");
	}
	printf("\nThe marks was :- %d ",marks);

}