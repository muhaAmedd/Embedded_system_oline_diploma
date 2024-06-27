

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char val;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&val);
	printf("ASCII value of %C = %d",val,val);
	return EXIT_SUCCESS;
}
