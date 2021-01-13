#include "function.h"
//hw0601
void options(int64_t *num)
{
	uint8_t *a_ptr = (uint8_t*)num;
	for(int32_t i = 0; i<8 ; i++)
	{
		printf("(%d) 0x%02x",i+1,*(a_ptr+i));
	}
	printf("\n");
}
void edit( int64_t *num, int32_t position, uint32_t change_num )
{
	uint8_t *b_ptr = (uint8_t *)num;
	*(b_ptr + position -1 )  = change_num;
}
//hw0602
void printNumber(int32_t *a_ptr, int32_t index)
{
	printf("Result : ");
	for (int32_t i = 0; i < index; i++)
	{
		if (*(a_ptr + i) != -1)
		{
			printf("%2d ", *(a_ptr + i));
		}
	}
	printf("\n");
	return;
}
void redo(int32_t *index)
{
	*index++;
	return;
}
void undo(int32_t *index)
{
	*index--;
	return;
}
void TenNum(int32_t *a_ptr)
{
	for (int32_t i = 1; i < 10; i++)
	{
		*(a_ptr + i - 1) = *(a_ptr + i);
	}
	*(a_ptr + 9) = -1;
	return;
}	
//hw0603
void rotate( double *x, double *y, double theta )
{
	double tempx = *x;
	double tempy = *y;
	double radian = theta*(-1.0)*(M_PI/180);//M_PI is 3.14...
	*x = tempx * cos(radian) - tempy * sin(radian);
	*y = tempx * sin(radian) + tempy * cos(radian);
	return;
}
//hw0604
void project(double *x, double *y, double *z, int32_t a, int32_t b, int32_t c, int32_t d )
{
	double cx = *x;//加個c只是為了儲存原本的x,y,z的值
	double cy = *y;
	double cz = *z;
	double px = 0;//加個p只是為了確認這是投影後的點
	double py = 0;
	double pz = 0;
	px = cx + a * (d - (cx * a + cy * b + cz * c)) / (a * a + b * b + c * c);	
	py = cy + b * (d - (cx * a + cy * b + cz * c)) / (a * a + b * b + c * c);
	pz = cz + c * (d - (cx * a + cy * b + cz * c)) / (a * a + b * b + c * c);
	printf("The projection is (%lf,%lf,%lf)\n",px,py,pz);
	return;
}
//hw0605
int32_t examine( uint8_t a[], uint8_t b[], uint8_t c[], uint8_t d[] )
{
	int32_t AllNumber[53] = {0};
	for(int32_t i = 0; i < 13 ; i++)
	{
	 	if ((a[i] > 52 || a[i] < 1) || AllNumber[a[i]] == 1)
		{
			return 1;
		}
		else
		{
			AllNumber[a[i]] = 1;
		}
		if ((b[i] > 52 || b[i] < 1) || AllNumber[b[i]] == 1)
			return 1;
		else
		{
			AllNumber[b[i]] = 1;
		}
		if ((c[i] > 52 || c[i] < 1) || AllNumber[c[i]] == 1)
			return 1;
		else
		{
			AllNumber[c[i]] = 1;
		}
		if ((d[i] > 52 || d[i] < 1) || AllNumber[d[i]] == 1)
			return 1;
		else
		{
			AllNumber[d[i]] = 1;
		}
	}
	return 0;
}
void print_card( uint8_t a[] )
{
	for(int32_t i = 0; i<13; i++)
	{
		printf("%2d ",a[i]);
	}
	printf("\n");
}
void sort_card(uint8_t a[13], void func())
{
	func(a);
	return;
}
void func01(uint8_t a[13])
{
	for (int32_t i = 0; i < 12; i++)
	{
		for (int32_t j = i; j < 13; j++)
		{
			if ((a[i] + 11) % 13 < (a[j] + 11) % 13)
			{
				uint8_t temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return;
}
void func02(uint8_t a[13])
{
	for (int32_t i = 0; i < 13; i++)
	{
		for (int32_t j = i; j < 13; j++)
		{
			if (((a[i] + 10) % 13) < ((a[j] + 10) % 13))
			{
				uint8_t temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return;
}
void func03(uint8_t a[13])
{
	for (int32_t i = 0; i < 13; i++)
	{
		for (int32_t j = i; j < 13; j++)
		{
			if (((a[i] - 1) % 13) < ((a[j] - 1) % 13))
			{
				uint8_t temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int32_t i = 0; i < 13; i++)
	{
		for (int32_t j = i; j < 13; j++)
		{
			if ((a[i] - 1) / 13 > (a[j] - 1) / 13)
			{
				uint8_t temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return;
}



















