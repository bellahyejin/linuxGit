#include <stdio.h>

void main(){

	int value=0;
	int a= 0, b=0;
	int resul=0;

	printf("Enter number : ");
	scanf("%d", &value);

	// printf("Enter values : ");
	scanf("%d %d", &a, &b);
	
	switch(value) {
	case 1: 
		resul = a + b;
		break;
	case 2:
		resul = a >= b ? (a-b) : (b-a);
		break;
	case 3: resul = a * b; break;
	case 4: resul = a >= b ? (a/b) : (b/a); break;
	default: printf("Error");break;
	}

	printf("\n\n %d \n\n", resul);

}
