#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[30];
	int roll;
	float mark;
};


int main(void) {
	struct student info[10];
	printf("Enter information of students:");
	for(int i=0;i<10;i++){
		printf("\n for roll number %d \n",i+1);
		info[i].roll=i+1;
		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",info[i].name);
		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&info[i].mark);

	}
	printf("\t\nDisplaying information of students:");
	for(int i=0;i<10;i++){
		printf("\nInformation for roll number %d\n",i+1);
		printf("name: %s\n",info[i].name);
		printf("marks: %.2f",info[i].mark);

	}

	return 0;
}
