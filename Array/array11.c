//To find the maximum and minimum elements in an array
#include<stdio.h>
void main(){
	int a, i, x, y;
	int arr[i];
	printf("Enter the number of elements in your array: ");
	scanf("%d", &a);
	for(i=0; i<a; i++)
	{
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	x=arr[0];
	y=arr[0];
	for(i=0; i<a; i++){
		if(arr[i]>x){
			x=arr[i];
			continue;
		}
		if(arr[i]<y){
			y=arr[i];
			break;
	}
	}
	printf("Minimum element: %d\n", y);
	printf("Maximum element: %d", x);
	return 0;
}
