#include<stdio.h>
int main(){
	int age;
	printf("Enter age :- ");
	scanf("%d",&age);
	if(age>18){
		printf("\nThey are adult");
		printf("\nThey are vote");
		printf("\nThey can drive the car");
	}
	else {
		printf("\nThey are not adult");
	}
	printf("\nThe age was :- %d ",age);

}