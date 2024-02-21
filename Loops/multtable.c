//TO display the multiplication of a certain amount of numbers at once.
#include<stdio.h>
void main(){
	int j, i;
	for(i=1; i<=8; i++){
		for(j=1; j<=10; j++){
			printf("%d * %d = %d, ",i, j, i*j );
		}
		printf("\n");
	}
return 0;
}
