// To check the highest and lowest number among three given numbers
#include<stdio.h>
void main(){
	int a, b, c;
	printf("Number 1: %d", a);
	scanf("%d", &a);
	printf("Number 2: %d", b);
	scanf("%d", &b);
	printf("Number 3: %d", c);
	scanf("%d", &c);
	if (a<b && a<c){
		printf("Smallest= %d", a);
	}
	else if (b<c && b<a){
		printf("Smallest= %d", b);
	}
	else{
	printf("Smallest= %d", c);}
	printf("\n");
	if (a>b && a>c){
		printf("Highest= %d", a);}
	else if (b>c && b>a){
		printf("Highest= %d", b);}
	else
		printf("Highest= %d", c);
	return 0;
}

