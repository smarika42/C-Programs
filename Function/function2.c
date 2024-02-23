//To swap two numbers using a function
#include<stdio.h>
void main(){
	int swap(int a, int b){
		return (a=b, b=a);
	}
	int i, j;
	printf("First number:");
	scanf("%d", &i);
	printf("Second number:");
	scanf("%d", &j);
	printf("After swapping: \n");
	printf("n1 = %d\n", swap(i, j));
	printf("n2 = %d", swap(j, i));
return 0;
}
