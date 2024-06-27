

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char val;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&val);
	if( (val>=65 && val<=90) || (val>=97 && val<=122) )
		printf("%c is an alphabet",val);
	else
		printf("%c is not an alphabet",val);
	return EXIT_SUCCESS;
}
