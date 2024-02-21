//To display multiplication table for a given integer.(for)
#include<stdio.h>
void main(){
	int i, n;
	printf("Enter any number: %d", n);
	scanf("%d", &n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d X %d= %d \n", n, i, n*i);
	}
}
