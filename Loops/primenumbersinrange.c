//To print prime numbers in a range.
#include<stdio.h>
void main(){
	int a, b, x, i, n;
	printf("Enter two intervals:");
	scanf("%d %d", &a, &b);
	printf("Prime numbers between %d and %d are: \n", a, b);
	for(n=a; n<b; n++){
		for(i=2; i<=n/2; i++){
			x=n%i;
		if(x==0)
			break;
		}
		if(x==0){
			continue;		
				}
			else
			printf("%d\n", n);
		}
return 0;
}
