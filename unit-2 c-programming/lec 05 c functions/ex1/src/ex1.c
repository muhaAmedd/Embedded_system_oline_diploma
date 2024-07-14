
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

void primenums(int a,int b){
	if(a>b){
		int temp=a;
		a=b;b=temp;
	}

	for(int i=a;i<=b;i++ ){
		if(i<2)continue;
		int flag=1;
		for(int j=2;j<=sqrt(i);j++){
			if(!(i%j)){
				flag=0;
				break;
			}

		}
		if(flag)
			printf("%d ",i);
	}
}

int main(void) {
	int x,y;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);

	primenums(x,y);


	return 0;
}
