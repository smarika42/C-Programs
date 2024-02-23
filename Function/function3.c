//To check if a given number is even or odd using the function
#include<stdio.h>
void main(){
	int evenodd(int a){
	return (a%2);
	}
	int a;
	printf("Input any number: ");
	scanf("%d", &a);
	if(evenodd(a)==0){
		printf("%d is even.", a);
	}
	else{
		printf("%d is odd.", a);
	}
return 0;
}
