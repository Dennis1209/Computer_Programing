#include <stdio.h>
#include <stdint.h>
#include "function.h"
int main()
{
	double x = 0;
	double y = 0;
	double theta = 0; 
	printf("Please enter a point: ");
	if(scanf( "%lf %lf",&x,&y ))
	{
	}
	else
	{
		printf("Wrong input\n");
		return 0;
	}
	printf("Please enter theta (0-360): ");
	if(scanf( "%lf",&theta)!= 1 || theta>360 || theta<0)
	{
		printf("Wrong input\n");
		return 0;
	}
	rotate(&x,&y,theta);
	printf("%lf %lf",x,y);
	return 0;
}

