//To sort elements of an array in ascending order.
#include<stdio.h>
void main(){
	int n, i, j, a;
	int arr[i];
	printf("Enter the number of elements in the array:");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Enter elements:");
		scanf("%d", &arr[i]);
	}
	printf("The elements of the array in ascending order is: \n");
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
		if(arr[j]<arr[i]){//Bubble sort algorithm
			a=arr[i];
			arr[i]=arr[j];
			arr[j]= a;
		}	
	}
}
for(i=0; i<n; i++){
	printf("%d\t", arr[i]);
}
return 0;
}
