//To convert a decimal number to a binary number using the function
#include<stdio.h>
int decimal(int);
void main(){
	int dec, bin;
	printf("Input a number: ");
	scanf("%d", &dec);
	bin=decimal(dec);
	printf("Binary value is: %d\n", bin);
	return 0;
}
int decimal(int dec){
		int r, bin=0, f=1;
		while (dec!=0){
		r=dec%2;
		bin=bin+r*f;
		f=f*10;
		dec=dec/2;
	}
	return (bin);
}
