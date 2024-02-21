//To print factorials of a given number
#include<stdio.h>
void main(){
	int i, n, f=1;
	printf("Enter a positive number: %d", n);
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		f=f*i;
	printf("Factorial=%d", f);
}
