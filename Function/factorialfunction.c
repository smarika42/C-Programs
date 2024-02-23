#include<stdio.h>
void main(){
	int a;
	printf("Enter any postive number: ");
	scanf("%d", &a);
	int multiply(int a){
		if (a>=1){
			return a * multiply(a-1);
		}
		else{
			return 1;
		}
	}
	int r = multiply(a);
	printf("Factorial = %d", multiply(a));
return 0;
}
