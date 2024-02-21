/*
*
**
***
****
*/
#include<stdio.h>
void main(){
	int i, j;
	for(i=1; i<=5; i++){
		for (j=1; j<=i+1; j++){
			if(j<=i){
				printf("*");
			}
			else{
				printf("\n");
			}
			
		}
	}
	return 0;
}
