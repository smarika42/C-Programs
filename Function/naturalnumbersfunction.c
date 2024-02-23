//To find the sum of natural numbers using recursion
#include<stdio.h>
void main(){
	int a;
	printf("Enter a positive integer: ");
	scanf("%d", &a);
	int sum(int a){
		if(a>0){
			return a+sum(a-1);
		}
		else{
			return 0;
		}
	}
	int r;
	r= sum(a);
	printf("Sum = %d", sum(a));
return 0;
}
