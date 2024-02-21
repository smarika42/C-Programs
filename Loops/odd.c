//To print all odd number between 1 and 100.(while)
#include<stdio.h>
void main(){
	int i=1, a;
	while(i<=100){
		a= i % 2;
		if (a!=0) {
		printf("%d\n", i);}
		i++;
	}
	return 0;
}
