//To keep asking for a number until a negative number is the input(while)
#include<stdio.h>
void main(){
	int a, i;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	while(a>0){
		printf("Enter another number:%d", i);
		scanf("%d", &i);
		if (i<0){
			break;
		}
		
	}
}
