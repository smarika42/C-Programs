#include<stdio.h>
void main(){
	int i, j, a, b;
	int arr[i][j];
	printf("Enter the number of rows and columns in your array: ");
	scanf("%d %d", &a, &b);
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("Elements [%d] [%d]: ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The matrix is: \n");
	for(i=0; i<a; i++){
		printf("\n");
		for(j=0; j<b; j++){
			printf("%d\t", arr[i][j]);
		}
}
return 0;
}
