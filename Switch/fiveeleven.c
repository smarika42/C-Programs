#include<stdio.h>
void main(){
	int a;
	printf("Enter any number: %d", a);
	scanf("%d", &a);
	switch(a%5){
		case 0:
			printf("The number is divisible by 5");
			break;
		default:
			printf("The number is not divisible by 5.");
	}
	printf("\n");
	switch(a%11){
		case 0:
			printf("The number is divisible by 11");
		break;
		default:
			printf("The number is not divisible by 11");
	}
}
