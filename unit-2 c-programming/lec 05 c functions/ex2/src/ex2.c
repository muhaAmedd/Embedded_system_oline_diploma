
#include <stdio.h>
#include <stdlib.h>

int calc_factorial(int n){
	if(!n)
		return 1;
	else
		return n*calc_factorial(n-1);
}

int main(void) {
	int num;
	printf("Enter an positive integer:  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("\n Factorial of %d = %d ",num,calc_factorial(num));




	return 0;
}
