// To print the sum of all even numbers from 1 to n.(do/while)
#include<stdio.h>
void main(){
	int i=1, n, s=0;
	printf("Enter n=%d", n);
	scanf("%d", &n);
	do{
		if(i%2==0){
		s=s+i;}
		i++;
	}
	while(i<=n);
	printf("Sum=%d", s);
}
