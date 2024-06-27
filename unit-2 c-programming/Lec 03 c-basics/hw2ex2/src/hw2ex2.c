/*
 ============================================================================
 Name        : hw2ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char val;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&val);
	if(val=='a'||val=='e'||val=='i'||val=='o'||val=='u')
		printf("%c is a vowel.",val);
		else
			printf("%c is a consonant.",val);
	return EXIT_SUCCESS;
}
