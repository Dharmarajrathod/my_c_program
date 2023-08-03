#include<stdio.h>
int main(){
	int i,a;
	printf("Enter a number :- ");
	scanf("%d",&i);
	int sum =0;
	for(int n=1;n<=i;n++){
		sum = sum + n;
		a = sum;
	}
	printf("\nSum is :- %d",a);
	for(int m=i;m>=0;m--){
		printf("\nReverse is:- ");
		printf("%d",m);
	}
}