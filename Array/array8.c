//To separate odd and even integers into separate arrays.
#include<stdio.h>
void main(){
	int a, i, j=0, k=0;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &a);
	int arr[a], arr1[a], arr2[a];
	for(i=0; i<a; i++){
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	for(i=0; i<a; i++){
		if(arr[i]%2==0){
			arr1[j]=arr[i];
			j++;
		}
		else{
		arr2[k]=arr[i];	
		k++;
	}
	}
	printf("Even elements: ");
	for(i=0; i<j; i++){
	printf("%d ", arr1[i]);
}

	printf("\n");
	printf("Odd elements: ");
	for(i=0; i<k; i++){
	printf("%d ", arr2[i]);
}
printf("\n");
return 0;
}
