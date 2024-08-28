

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[15],ans[15],n;
	printf("input the number of elements to store in the array : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("input %d number of elements in the array : \n",n);
	for(int i=0;i<n;i++){
		printf("element %d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);

	}
	int *pans=ans;int *parr=&arr[n-1];




	printf("the elements of array in reverse order are : \n");
	for(int i=0;i<n;i++,pans++,parr--){
			*pans=*parr;
			printf("element %d : %d \n",n-i,*pans);
	}

	return 0;
}
