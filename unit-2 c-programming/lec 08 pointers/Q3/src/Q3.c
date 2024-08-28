#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
char ch[30];
char ans[30];
printf("input a string : ");
fflush(stdin);fflush(stdout);
gets(ch);
int count=strlen(ch)-1;
char *pch=&ch[strlen(ch)-1];
char *pans=ans;
while(count>=0){
	*pans=*pch;
	pans++;pch--;
}
*pans=0;
printf("Reverse of the string is : %s",ans);



	return 0;
}
