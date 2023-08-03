#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(i == n){
			break;
		}
		i = i * (i- 1);
	}
	printf("%d",i);
}