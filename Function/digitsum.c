//To find the sum of digits of a number using recursion.
#include<stdio.h>
void main(){
	int a, sum; 
	printf("Enter a number: ");
	scanf("%d", &a);
	int digitsum(int a){
		while (a!=0){
			return (a%10 + digitsum(a/10));
		}
		sum = digits(a);
		printf("Sum = %d", digitsum(a));
	}
	
return 0;
}
