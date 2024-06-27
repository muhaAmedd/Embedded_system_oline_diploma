

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	if(num>0)
		printf("%.2f is postive",num);
	else if(!num)
		printf("You entered zero");
	else
		printf("%.2f is negative",num);
	return EXIT_SUCCESS;
}
