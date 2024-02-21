/*
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
void main(){
	int i=1, j, x=1;
	for(i; i<=4; i++){
		for(j=1; j<=i; j++){
			printf("%d", x++);
		}
		printf("\n");}
	
}
