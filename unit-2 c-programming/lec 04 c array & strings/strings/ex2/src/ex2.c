
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int len;char s[100];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(s);
	for(int i=0;;i++){
		if(s[i]==0){
			len=i;
			break;
		}
	}
	printf("Length of string: %d",len);

	return EXIT_SUCCESS;
}
