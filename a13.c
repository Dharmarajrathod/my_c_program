#include<stdio.h>
int main(){
	int i;
	printf("Enter a number :- ");
	scanf("%d",&i);
	int sum =1;
	for(int n=1;n<=i;n++){
		sum = sum * n;
	}
	printf("\nSum is :- %d",sum);
}