// To check if a number is positive, negative or zero
#include<stdio.h>
void main(){
	int a;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	if (a<0){
		printf("The number is negative. \n");
	}
	else if (a>0){
		printf("The number is positive. \n");
	}
	else
		printf("It is zero");
	return 0;
}
