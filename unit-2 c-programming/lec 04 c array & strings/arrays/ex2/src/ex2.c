

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	float sum=0;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float nums[300];
	for(int i=0;i<n;i++){
		printf("Enter number %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&nums[i]);
		sum+=nums[i];
	}
	printf("Average = %.2f",sum/n);


	return EXIT_SUCCESS;
}
