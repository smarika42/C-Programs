// TO print sum of natural numbers from 1 to n.(for)
#include<stdio.h>
void main(){
	int i=1, n, s=1;
	printf("Enter n= %d", n);
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		s=s+i;
	}
	printf("Sum= %d", s);
}
