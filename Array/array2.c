//To find the sum of all elements of the array
#include<stdio.h>
void main(){
	int n, i, a=0; 
	printf("Enter the number of elements in the array: %d", n);
	scanf("%d", &n);
	int numbers[i];
	i=0;
	while(i<n){
		printf("Enter an element:");
		scanf("%d", &numbers[i]);
		i++;
	}
	for(i=0; i<n; i++){
	a += numbers[i];
	}
	printf("Sum= %d", a);
return 0;
}
