//To count the number of digits in a number.(do/while)
#include<stdio.h>
void main(){
	int a, i;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	do {
		a/=10;
		i++;
	}
	while(a!=0);
	printf("Number of digits = %d", i);
}
