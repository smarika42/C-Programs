#include<stdio.h>
void main(){
	int a;
	printf("Enter any number: %d", a);
	scanf("%d", &a);
	switch(a%2){
		case 0:
			printf("The number is even.\n");
		break;
		default:
			printf("The number is odd.");
	}
	return 0;
}
