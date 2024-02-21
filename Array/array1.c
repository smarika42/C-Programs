//To read n number of values in an array and display them in reverse order
#include<stdio.h>
void main(){
	int n, i;
	printf("Enter the number of elements to store in the array: %d", n);
	scanf("%d", &n);
	int numbers[i];
	i=0;
	while(i<=n-1){
		printf("Enter number:");
		scanf("%d", &numbers[i]); 
		i++;
	}
	i=n-1;
	while (i>=0){
		printf("%d\n", numbers[i]);
		i--;
	}
return 0;
}
