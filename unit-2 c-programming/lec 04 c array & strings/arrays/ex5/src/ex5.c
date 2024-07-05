

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,mynum,flag=0,arr[30];
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&mynum);


	for(int i=0;i<n;i++){
		if(mynum==arr[i]){
			printf("Number found at the location = %d",i+1);
					flag=1;
		}
	}
	if(!flag){
		printf("Number can't be found");
	}
	return EXIT_SUCCESS;
}
