//to print the multiplication table for a given integer.(while)
#include<stdio.h>
void main(){
	int a, i=1;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	while(i<=10){
		printf("%d X %d = %d\n", a, i, a*i);
	i++;
	}
}
