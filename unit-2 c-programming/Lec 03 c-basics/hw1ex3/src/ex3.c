
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x ,&y);
	printf("sum: %d", x+y);

	return EXIT_SUCCESS;
}
