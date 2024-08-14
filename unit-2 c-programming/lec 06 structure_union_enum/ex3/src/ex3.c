#include <stdio.h>
#include <stdlib.h>

struct complex_num{
	float r;
	float i;
} x1,x2,sum;

struct complex_num get_info(void);
struct complex_num add_complex(struct complex_num,struct complex_num);



int main(void) {
	printf("for 1st complex number \n");
	x1=get_info();
	printf("\t\n for 2nd complex number\n");
	x2=get_info();
	sum=add_complex(x1,x2);
	printf("sum= %.2f + %.2fi",sum.r,sum.i);



	return 0;
}
struct complex_num get_info(void){
	struct complex_num temp;
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&temp.r,&temp.i);
	return temp;
}
struct complex_num add_complex(struct complex_num x1,struct complex_num x2){
	struct complex_num temp;
	temp.r=x1.r+x2.r;
	temp.i=x1.i+x2.i;
	return temp;
}
