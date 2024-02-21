//To count the number of digits in a number.(for)
#include<stdio.h>
void main(){
	int a, i;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	for(a; a!=0; a/=10){
		i++;
	}
	printf("Number of digits = %d", i);
	}
