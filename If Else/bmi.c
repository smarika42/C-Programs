// To ask user for their height and weight and calculate their BMI
#include<stdio.h>
void main(){
	int weight;
	printf("Enter your weight: %d",weight);
	scanf("%d", &weight);
	float height;
	printf("Enter your height: %f", height);
	scanf("%f", &height);
	float BMI = weight/(height*height);
	printf("BMI = %.2f\n", BMI);
	if (BMI<=18.4){
		printf("Underweight");
	}
	else if(BMI<=24.9 && BMI>18.4){
		printf("Normal");
	}
	else if(BMI<=39.9 && BMI>24.9){
		printf("Overweight"); 
	}
	else
	printf("Obese");
	return 0;
}
