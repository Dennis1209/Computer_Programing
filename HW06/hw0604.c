#include "function.h"
#include <stdio.h>
#include <stdint.h>

int main()
{
	int32_t a = 0;
	int32_t b = 0;
	int32_t c = 0;
	int32_t d = 0;
	double x = 0;
	double y = 0;
	double z = 0;
	printf("Please enter the plane: ");
	if(scanf("%d %d %d %d",&a, &b, &c, &d) != 4)
	{
		printf("Wrong input!\n");
		return 0;
	}
	printf("The plane is (%d)x + (%d)y + (%d)z + (%d) = 0\n",a, b, c, d);
	printf("Please enter the point: ");
	if(scanf("%lf %lf %lf",&x, &y, &z) != 3)
	{
		printf("Wrong input!\n");
		return 0;
	}
	project(&x, &y, &z, a, b, c, d);
	return 0;
}
	
