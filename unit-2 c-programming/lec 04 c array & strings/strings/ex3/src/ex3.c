

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s[100];char ans[100];
	printf("Enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++){
		ans[i]=s[strlen(s)-1-i];
	}
	ans[i]=0;
	printf("Reverse string is : %s",ans);
	return EXIT_SUCCESS;
}
