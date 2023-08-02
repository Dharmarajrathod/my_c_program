#include<stdio.h>
int main(){
	int age;
	printf("Enter age :- ");
	scanf("%d",&age);
	age > 18 ? printf("They are adult") : printf("They are not adult") ;
	printf("\nThe age was :- %d ",age);

}