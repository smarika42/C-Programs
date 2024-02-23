//To print the Fibonacci Series using recursion
#include<stdio.h>
void main(){
	int a, i;
	printf("Enter number of terms for the series: ");
	scanf("%d", &a);
	int fibonacci(int a){
		if(a==0){
			return 0;
		}
		else if(a==1){
			return 1;
		}
		else{
			return fibonacci(a-1)+fibonacci(a-2);
		}
		}
	printf("Fibonacci series :\n");
	for(i=0; i<a; i++){
		printf("%d\t", fibonacci(i));
	}
return 0;
}
