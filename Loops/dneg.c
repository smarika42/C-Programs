//To keep asking for a number until a negative number is the input(do/while)
#include<stdio.h>
void main(){
	int a, i;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	do {
		printf("Enter another number: %d", i);
		scanf("%d", &i);
	}
	while(i>0);
}
