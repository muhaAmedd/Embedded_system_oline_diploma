

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,num,loc,arr[30];
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("\r\nEnter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);

	for(int i=n;i>=loc;i--){
		arr[i]=arr[i-1];
	}
	arr[loc-1]=num;
	for(int i=0;i<=n;i++)
		printf("%d ",arr[i]);
	return EXIT_SUCCESS;
}
