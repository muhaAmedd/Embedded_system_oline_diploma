

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	float arr[50][50];
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Enter elements of matrix: \r\n");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr[i][j]);
		}
	}

	printf("Entered Matrix: \r\n");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("%f \t",arr[i][j]);
		}
		printf("\r\n");
	}

	printf("Transpose of Matrix: \r\n");
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			printf("%.2f \t",arr[j][i]);
		}
		printf("\r\n");
	}
	return EXIT_SUCCESS;
}
