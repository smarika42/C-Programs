//to print the multiplication table for a given integer.(do/while)
#include<stdio.h>
void main(){
	int i=1, n;
	printf("Enter a number: %d", n);
	scanf("%d", &n);
	do {
		printf("%d X %d = %d\n", n, i, n*i);
		i++;
	}
	while(i<=10);
}
