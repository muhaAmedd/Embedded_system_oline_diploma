
#include <stdio.h>
#include <stdlib.h>

int calcnum(int x,int y){
	if(!y)
		return 1;

	return x*calcnum(x,y-1);
}

int main(void) {
	int x,y;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);

	printf("%d^%d = %d",x,y,calcnum(x,y));


	return 0;
}
