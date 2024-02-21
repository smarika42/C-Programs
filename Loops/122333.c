/*
1
22
333
4444
*/
#include<stdio.h>
void main(){
	int i=1, j;
	for(i; i<=4;i++){
		for (j=1; j<=i; j++){
				printf("%d ", i);
			}
			printf("\n");
	}
	return 0;
} 
