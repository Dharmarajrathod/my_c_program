#include<stdio.h>
int main(){
	int i;
	do{
		printf("Enter The Number : - ");
		scanf("%d",&i);
		if(i % 7 ==0){
			break;
		}
	}while(1);
}