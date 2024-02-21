// TO print sum of natural numbers from 1 to n.(do/while)
#include<stdio.h>
void main(){
	int i=1, n, s=1;
	printf("Enter n= %d", n);
	scanf("%d", &n);
	do {
		s=s+i;
		i++;
	}
	while(i<=n);
	printf("Sum = %d", s);
}
