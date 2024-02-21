//To keep asking for a number until a negative number is the input(for)
#include<stdio.h>
void main(){
	int i, a;
	printf("Enter a number: %d", a);
	scanf("%d", &a);
	for(a; a>0; i){
		printf("Enter another number:%d", i);
		scanf("%d", &i);
		if (i<0){
			break;
		}
	}
	return 0;
}
