#include <stdio.h>
#include <stdlib.h>

const float pi=3.14159265359;

#define area(a) (pi*a*a)


int main(void) {
	float r,ans;
printf("Enter the radius : ");
fflush(stdin);fflush(stdout);
scanf("%f",&r);
ans=area(r);
printf( "ans = %.3f",ans);



	return 0;
}