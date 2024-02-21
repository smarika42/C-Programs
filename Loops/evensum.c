// To print the sum of all even numbers from 1 to n.(for)
#include<stdio.h>
void main(){
	int i=1, n, s=0;
	printf("Enter n=%d", n);
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		if (i%2==0){
			s=s+i;
		}
	}
	printf("Sum = %d", s);
}
