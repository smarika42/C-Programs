//To store elements in an array and print them
#include<stdio.h>
void main(){
	int a, i;
	printf("Enter the number of elements: %d", a);
	scanf("%d", &a);
	int numbers[i];
	i=0;
	while(i<=a-1){
		printf("Enter an element:");
		scanf("%d", &numbers[i]);
		i++;	
	}
	i=0;
	while(i<=a-1){
	printf("%d\n", numbers[i]);
	i++;
}
	return 0;
}
