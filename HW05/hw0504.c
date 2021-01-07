#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "regression.h"


int main()
{
	int32_t num = 0;
	double x[10000] = {0};
	double y[10000] = {0};
	printf("Please enter the point number: ");
	scanf("%d",&num);
	for(int32_t i = 1 ; i<=num ; i++ )
	{
		printf("Please enter point %d: ",i);
		scanf("%lf %lf",&x[i-1],&y[i-1]);
	}
	regression(x,y,num);
	return 0;
}
