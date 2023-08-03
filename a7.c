#include<stdio.h>
int main(){
	int i;
	printf("Enter a number:- ");
	scanf("%d",&i);
	for(int n = 1;n<=10;n++){
		printf("\n%d",i*n);
	}
}