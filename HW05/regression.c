#include "regression.h"

void regression(double x[10000],double y[10000],double n)
{
	double xy = 0.0;
	double ax = 0.0;
	double ay = 0.0;
	double yall = 0.0;
	double xall = 0.0;
	double r = 0.0;
	double m = 0.0;
	double finally = 0.0;
	for(int32_t j = 0 ; j<n ; j++)
	{
		ax += x[j];
	}
	ax = ax/n;
	for(int32_t k = 0 ; k<n ; k++)
	{
		ay += y[k];
	}
	ay = ay/n;
	for(int32_t k = 0; k<n ; k++)
	{
		x[k] =  x[k]-ax;
		y[k] =  y[k]-ay;
	}
	for(int32_t j = 0; j<n ; j++)
	{
		xy += x[j]*y[j];
	}
	for(int32_t j = 0 ; j<n ; j++)
	{
		x[j] = pow(x[j],2);
		y[j] = pow(y[j],2);
	}
	for(int32_t i = 0 ; i<n ; i++)
	{
		xall += x[i];
		yall += y[i];
	}
	r = xy/(sqrt(yall)*sqrt(xall));
	m = r * ( (sqrt(yall/n)) / (sqrt(xall/n)) );
	finally = m*(-ax)+ay;
	printf("Regression Equation: y = %lfx + (%lf)\n",m,finally);
}














