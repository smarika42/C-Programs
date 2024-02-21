/*
1
12
123
1234
*/
#include<stdio.h>
void main(){
	int i=1, j;
	for (i; i<=4; i++){
		for (j=1; j<=i+1 ;j++){
			if(j<=i){
			printf("%d", j);}
			else{
			printf("\n");}
		}
	}
}
