
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch='A';
	char *p=&ch;
	while(ch<='Z'){
		printf("%c ",*p);
	*p=*p+1;
	}
	return 0;
}
