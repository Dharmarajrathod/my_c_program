#include<stdio.h>
int main(){
	char ch;
	printf("Enter the char:- ");
	scanf("%c",&ch);
	if(ch > 'A' && ch < 'Z'){
		printf("Char is Upper Case");
	}
	else if (ch > 'a' && ch < 'z'){
		printf("Char is Lower Case");
	}
	else{
		printf("Invalid Char");
	}
}