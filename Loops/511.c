#include<stdio.h>
void main(){
	int x;
	printf("Enter any number:%d", x);
	scanf("%d", &x);
	if (x%5 == 0 && x%11 == 0){
		printf("X is divisible by 5 and 11");
	}
	else
	printf("X is not divisible by 5 and 11");
	return 0;
}
