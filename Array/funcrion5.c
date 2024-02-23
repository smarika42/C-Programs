//To check whether a number is a prime number or not using the function
#include<stdio.h>
void main(){
	int prime(int a){
		int i;
		for(i=2; i<a/2; i++){
			return a%i;
		}
	}
	int a;
	printf("Input a number: ");
	scanf("%d", &a);
	if (prime(a)==0){
		printf("%d is a composite number.", a);
	}	
	else{
		printf("%d is a prime number.", a);
	}
return 0;
}
