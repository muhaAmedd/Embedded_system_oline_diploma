
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s[50],ch;
	int sum=0;
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for(int i=0;i<strlen(s);i++){
		if(ch==s[i])
			sum++;
	}
	printf("Frequency of %c = %d",ch,sum);
	return EXIT_SUCCESS;
}
