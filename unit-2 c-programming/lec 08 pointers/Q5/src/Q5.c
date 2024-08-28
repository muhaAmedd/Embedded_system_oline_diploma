#include <stdio.h>
#include <stdlib.h>

struct employee{
	char *name;
	int id;
};

int main(void) {
struct employee emp1={"mido",102};
struct employee emp2={"omar",152};
struct employee emp3={"wael",176};
struct employee *arr[3]={&emp1,&emp2,&emp3};
struct employee **ptr=arr;

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
printf("Employe Name : %s \nEmployee ID : %d\r\n",ptr[i]->name,ptr[i]->id);

}


	return 0;
}
