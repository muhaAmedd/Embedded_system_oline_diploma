

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reversestring(char s[],int l,int r){
	//two pointers
	if(l>=r)
		return;

int temp=s[l];
s[l]=s[r];
s[r]=temp;
reversestring(s,l+1,r-1);


}


int main(void) {
	char s[50];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(s);

	int n=strlen(s);
	reversestring(s,0,n-1);
	printf("%s",s);
	return 0;
}
