

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr1[2][2],arr2[2][2],ans[2][2];
	printf("Enter the elements of 1st matrix \r\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
		scanf("%f",&arr1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix \r\n");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("Enter b%d%d : ",i+1,j+1);
				fflush(stdin);fflush(stdout);
			scanf("%f",&arr2[i][j]);
			}
		}

		printf("sum of matrix \r\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			ans[i][j]=arr1[i][j]+arr2[i][j];
			printf("%.2f \t",ans[i][j]);
		}
		printf("\r\n");
	}
	return EXIT_SUCCESS;
}
