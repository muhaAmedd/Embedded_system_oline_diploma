
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void sieve_of_eratosthenes(int min,int max){
	bool isprime[max+1];
	memset(isprime,true,sizeof(isprime));
	for(int i=2;i*i<=max;i++){
		if(isprime[i]){
			for(int j=i*i;j<=max;j+=i)
				isprime[j]=false;
		}
	}
	for(int i=(min<2?2:min);i<=max;i++){
		if(isprime[i])
			printf("%d  ",i);
	}


}


int main(void) {
	int x,y;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	if(x>y){
		int temp=x;
		x=y;y=temp;
	}
	sieve_of_eratosthenes(x,y);

	return 0;
}
