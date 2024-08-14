#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct dist{
	float feet;
	float inch;
} x1,x2,ans;
struct dist get_info(void){
	struct dist temp;
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&temp.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&temp.inch);
	return temp;
}
struct dist sum_dist(struct dist x1,struct dist x2){
	struct dist x3;
	float temp_inch=(x1.feet-(int)x1.feet)*12;
	temp_inch+=(x2.feet-(int)x2.feet)*12;
	temp_inch+=x2.inch+x1.inch;
	x3.feet=(int)x1.feet+(int)x2.feet;
	x3.feet+=(int)temp_inch/12;
	x3.inch=fmod(temp_inch,12);
	return x3;

}

int main(void) {
	printf("Enter information for 1st distance \n");
	x1=get_info();
	printf("\t\nEnter information for 2nd distance \n");
	x2=get_info();
	ans=sum_dist(x1,x2);
	printf("sum of distances= %.1f - %.2f",ans.feet,ans.inch);






	return 0;
}