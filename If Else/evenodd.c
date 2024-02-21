// TO check if a given number is even or odd
#include<stdio.h>
void main(){
	int p;
	printf("Enter any number: %d", p);
	scanf("%d", &p);
	if (p%2 == 0){
	printf("%d is even", p);}
	else
	printf("%d is odd", p);
	return 0;
}
