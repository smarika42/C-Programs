#include<stdio.h>
void main(){
	int a, r, x, i;
	printf("Enter a number: %d" , i);
	scanf("%d", &i);
	i=a;
	while (i!= 0){
		r=i%10;
		x=x+(r*r*r);
		i=i/10;
	}
	if (x==a){
		printf("It is an Armstrong number.");
	}
	else
	printf("It is not an Armstrong number.");
return 0;
}
