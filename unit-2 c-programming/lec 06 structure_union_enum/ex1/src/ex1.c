#include <stdio.h>
#include <stdlib.h>

struct students{
	char name[30];
	int roll;
	float mark;
};


int main(void) {
	struct students student1;
	printf("Enter information of students: \t\n");

	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",student1.name);

	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student1.roll);

	printf("Enter mark: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&student1.mark);

	printf("Displaying information\t\n");

	printf("name: %s\n",student1.name);
	printf("Roll: %d\n",student1.roll);
	printf("marks: %.2f",student1.mark);




	return EXIT_SUCCESS;
}