//To copy the elements of one array into another array
#include<stdio.h>
void main(){
	int n, i;
	int num[i], num1[i];
	printf("Enter the number of elements in the array:");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Enter elements: ");
		scanf("%d", &num[i]);
	}
	printf("The elements stored in the first array are:\n");
	for(i=0;i<n;i++){
		printf("%d\n", num[i]);
	}
	for(i=0; i<n; i++){
	num1[i]=num[i];
	}
	printf("The elements stored in the second array are:\n");
	for(i=0;i<n;i++){
		printf("%d\n", num1[i]);
	}
return 0;
}
