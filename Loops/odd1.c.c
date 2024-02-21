//To print all odd number between 1 and 100.(do/while)
#include<stdio.h>
void main(){
	int i=1;
	do{
		if (i%2 !=0){
			printf("%d\n", i);
		}
		i++;
	}
	while(i<=100);
}
