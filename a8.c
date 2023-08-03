#include<stdio.h>
int main(){
	int i;
	for(int n = 0; ; n++){
		printf("Enter the number:- ");
		scanf("%d",&i);
		if (i % 2 !=0){
			break;
		}
	}
}