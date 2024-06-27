/*
 ============================================================================
 Name        : hw2ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b && a>=c)
		printf("Largest number = %.2f",a);
	else if(b>=a && b>=c)
		printf("Largest number = %.2f",b);
	if(c>a && c>b)
		printf("Largest number = %.2f",c);

	return EXIT_SUCCESS;
}
