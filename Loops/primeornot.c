//To check if a number is prime or not.
#include<stdio.h>
void main(){
	int a, i, x;
	printf("Enter any number: %d", a);
	scanf("%d", &a);
	for(i=2; i<a; i++){
	x = a % i;
	if(x==0){
		break;
	}
	}
		if(x == 0){
			printf("%d is a composite number.", a);
		}
		else
			printf("%d is a prime number.", a);
return 0;
}
