#include<stdio.h>
int main(){
	int i;
	printf("Enter a number :- ");
	scanf("%d",&i);
	for(int n=10;n>=1;n--){
		printf("\nTable is :- %d",i*n);
	}

}