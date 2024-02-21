//To print all unique elements in an array
#include<stdio.h>
void main(){
	int n, i, j,counter;
	printf("Enter the number of elements in the array:");
	scanf("%d", &n);
	int numbers[i], number[j];
	i=0;
	for(i; i<n; i++){
		printf("Enter element: ");
		scanf("%d", &numbers[i]);
	}
	for(i=0; i<n; i++){
		counter =0;
		for(j=0;j<n+1; j++){
			if(i!=j){
			if(numbers[i] == number[j]){
			counter = counter + 1;
			}}
		}
	if (counter == 0){
	printf("%d\n", numbers[i]);
}
	}
//	printf("Unique elements = %d\n", numbers[i]);
return 0;
}
