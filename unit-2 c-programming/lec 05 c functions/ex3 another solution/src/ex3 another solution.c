

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(){
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		reverse();
		printf("%c",c);
	}
}

int main(void) {

	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	reverse();


	return 0;
}
