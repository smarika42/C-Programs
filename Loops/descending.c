#include<stdio.h>
void main(){
	int i;
	printf("Enter any number:%d", i);
	scanf("%d", &i);
	for(i; i>=0; i--){
		printf("%d\n", i);
	}
	return 0;
}
