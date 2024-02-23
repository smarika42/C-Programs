//To get the largest element of an array using the function
#include<stdio.h>
void main(){
		int a, i;
		printf("Input the number of elements to store in your array: ");
		scanf("%d", &a);
		int arr[a];
		for(i=0; i<a; i++){
			printf("Enter element: ");
			scanf("%d", &arr[i]);
		}
	int largest(int arr[],int a){
		int x;
		i=0;
		x=arr[0];
		while(i<a){
			if(x<arr[i]){
				x=arr[i];
			}
			i++;
		}
		return x;
	}
	printf("The largest element in the array is: %d", largest(arr,a));
return 0;
}
