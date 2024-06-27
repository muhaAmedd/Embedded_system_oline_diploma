

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("sum = %.2f",num*(num+1)/2.0);
	return EXIT_SUCCESS;
}
