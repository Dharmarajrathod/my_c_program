#include<stdio.h>
int main(){
	int i;
	printf("Enter a Number:- ");
	scanf("%d",&i);
	int n,sum = 0;
	n = 0;
	do{
		sum = sum + n;
		n++;
	}while(n<=i);
	printf("The sum is:- %d",sum);
}