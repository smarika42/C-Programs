// TO print sum of natural numbers from 1 to n.(while)
#include<stdio.h>
void main(){
	int i=1, n, s=1;
	printf("Enter n= %d", n);
	scanf("%d", &n);
	while(i<=n){
		s=s+i;
		i++;
	}
	printf("Sum = %d", s);
}
