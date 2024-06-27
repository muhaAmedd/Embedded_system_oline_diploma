

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("You entered: %d",num);
	return EXIT_SUCCESS;
}
