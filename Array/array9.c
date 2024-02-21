//To merge two arrays of same size in descending order.
#include<stdio.h>
void main(){
	int a, i, j, b, c;
	printf("Enter the number of elements in the first and second array: ");
	scanf("%d", &b);
	int arr[b], arr1[b], arr2[2*b];
	for(i=0; i<b; i++){
		printf("Enter element for first array: ");
		scanf("%d", &arr[i]);
	}
	printf("The elements of first array are: \n");
	for(i=0; i<b; i++){
	printf("%d\n", arr[i]);
	}
	for(i=0;i<b;i++){
		printf("Enter element for second array: ");
		scanf("%d", &arr1[i]);
	}
	printf("The elements of second array are: \n");
	for(i=0; i<b; i++){
		printf("%d\n", arr1[i]);
	}
	c = 2 * b;
	for(i=0; i<b; i++){
		arr2[i]=arr[i];
	}
	for(j=0; j<b; j++){
		arr2[i]=arr1[j];
		i++;
	}
	for(i=0; i<c; i++){
		for(j=0; j<c-1; j++){
		if(arr2[j]<=arr2[j+1]){
			a=arr2[j+1];
			arr2[j+1]=arr2[j];
			arr2[j]= a;
		}
	}
}
printf("The elements of the array in descending order is:");
for(i=0; i<c; i++){
	printf(" %d ", arr2[i]);
}
printf("\n");
return 0;
}
