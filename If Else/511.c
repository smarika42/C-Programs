// To check if a number is divisible by 5 and 11 or not
#include<stdio.h>
void main(){
	int x;
	printf("Enter any number:%d", x);
	scanf("%d", &x);
	if (x%5 == 0 && x%11 == 0){
		printf("X is divisible by 5 and 11");
	}
	else if(x%5 == 0){
		printf("X is divisible by 5");
	}
	else if (x%11 == 0){
		printf("X is divisible by 11");
	}
	else
	printf("X is not divisible by 5 or 11");
	return 0;
}
