// To print the sum of all even numbers from 1 to n.(while)
#include<stdio.h>
void main(){
	int i=1, n, s=0;
	printf("Enter n=%d", n);
	scanf("%d", &n);
	while(i<=n){
		if(i%2==0){
			s=s+i;
		}
		i++;
	}
	printf("Sum = %d", s);
}
