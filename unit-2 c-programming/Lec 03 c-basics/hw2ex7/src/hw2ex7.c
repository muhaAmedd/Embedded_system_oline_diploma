

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	unsigned long long factorial=1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else if(!num)
		printf("Factorial = 1");
	else{
		for(int i=num;i>0;i--)
			factorial*=i;
		printf("Factorial = %llu",factorial);


	}
	return EXIT_SUCCESS;
}
