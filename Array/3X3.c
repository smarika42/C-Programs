//Matrix multiplication 3X3
#include<stdio.h>
void main(){
	int i, j, k;
	int arr[3][3], arr1[3][3], arr2[3][3];
	printf("For first matrix:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Elements [%d] [%d]: ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The first matrix is: \n");
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf("%d\t", arr[i][j]);
		}
}
	printf("\n");
	printf("For second matrix: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Elements [%d] [%d]: ", i,j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("The second matrix is: \n");
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3
		; j++){
			printf("%d\t", arr1[i][j]);
		}
}
	printf("\n\n");
	printf("Multiplied matrix is:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			arr2[i][j]=0;
			for(k=0;k<3;k++){    
			arr2[i][j] += arr[i][k]*arr1[k][j];
		}
		printf("%d\t", arr2[i][j]);
		}
			printf("\n");
	}
	return 0;
}
