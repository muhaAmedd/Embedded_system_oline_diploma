#include <stdio.h>
#include <stdlib.h>



int main(void) {
	int m=29;
	printf("Address of m :%p \nvalue of m : %d \n",&m,m);

	//ab is assigned with the address of m
	int *ab=&m;
	printf("\nAdress of pointer ab : %p \nContent of pointer ab : %d \n",&ab,*ab);
    //the pointer variable ab is  assigned with the value 7 now
	*ab=7;
	printf("\nAddress of m : %p \nValue of m : %d",ab,*ab);



	return 0;
}
