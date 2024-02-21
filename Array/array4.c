//To count the total number of duplicate elements in an array
#include<stdio.h>
void main(){
	int n, i, count=0, j;
	printf("Enter the number of elements in the array:");
	scanf("%d", &n);
	int numbers[i];
	for(i=0; i<n; i++){
		printf("Enter element: ");
		scanf("%d", &numbers[i]);
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(numbers[i]=numbers[j]){
				count++;
				break;
		}
	}
}
printf("Number of duplicate elements=%d", count);
return 0;
}
