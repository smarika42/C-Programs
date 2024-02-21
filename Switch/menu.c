//To take order through a customer
#include<stdio.h>
void main(){
	printf("Choose your order:\n");
	printf("1=Momo \n2=Chowmein \n3=Burger \n");
	int Order;
	printf("Place your order:%d",Order);
	scanf("%d", &Order);
	switch(Order){
		case 1:
			printf("Your order for Momo has been placed.");
		break;
		case 2:
			printf("Your order for Chowmein has been placed.");
		break;
		case 3:
			printf("Your order for Burger has been placed.");
		break;
		return 0;
	}
}
