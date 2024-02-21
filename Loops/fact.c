#include<stdio.h>
void main(){
	int f=1, i=1, n;
	printf("Enter a positive number: %d", n);
	scanf("%d", &n);
	while(i<=n){
		f=f*i;
		i++;
	}
	printf("Factorial=%d",f);
	return 0;
}
