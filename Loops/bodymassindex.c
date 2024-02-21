/*To ask user for the number of users.
Than, to ask for their height and weight and output their BMI.
*/
#include<stdio.h>
void main(){
	int i;
	printf("Number of users: %d", i);
	scanf("%d", &i);
	int weight;
	float height;
	for(i; i>0; i--){
	printf("Enter your height:%f", height);
	scanf("%f", &height);
	printf("Enter your weight:%d", weight);
	scanf("%d", &weight);
	float BMI = weight/(height*height);
	printf("BMI = %.2f\n", BMI);
	if (BMI<=18.4){
		printf("Underweight\n");
	}
	else if(BMI>18.4 && BMI<=24.9){
		printf("Normal\n");
	}
	else if(BMI>24.9 && BMI<39.9){
		printf("Overweight\n");
	}
	else{
	printf("Obese\n");}
	}
}
