#include<stdio.h>
void main(){
	int x;
	printf("Enter any number: %d", x);
	scanf("%d", &x);
	switch(x>0){
		case 1:
			printf("X is positive");
		break;}
	switch(x<0){
		case 1:
			printf("X is negative");
		break;}
	switch(x==0){
		case 1:
			printf("X is 0");
		break;}
}
