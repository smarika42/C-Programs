/*
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
void main(){
	int i, j, k, rows;
	printf("Enter the number of rows: %d", rows);
	scanf("%d", &rows);
	for(i=1; i<=rows; i++){
		for(j=1; j<=rows-i; j++){
			printf(" ");
		}
		for (k=1; k<=(2*i-1); k++){
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
