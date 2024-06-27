

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char opr;
	float a,b;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&opr);

	printf("Enter two operands:  ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);

	switch(opr){
	case'+':
		printf("%.2f + %.2f = %.2f",a,b,a+b);
		break;
	case'-':
		printf("%.2f - %.2f = %.2f",a,b,a-b);
		break;
	case'*':
		printf("%.2f * %.2f = %.2f",a,b,a*b);
		break;
	case'/':
		printf("%.2f / %.2f = %.2f",a,b,a/b);
		break;
	default:
		printf("Error, operator is not correct.");
	}



	return EXIT_SUCCESS;
}
