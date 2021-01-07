#include "operation.h"

void Add(int32_t p1[100],int32_t p2[100],int32_t d1,int32_t d2)
{
	int32_t max = 0;
	max = d1;
	if(d2>d1)
	{
		max = d2;
	}
	int32_t p3[100]={0};
	for(int32_t i = max; i>-1 ; i--)
	{
	p3[i]=p1[i]+p2[i];
	}
	for(int32_t i = max; i>-1 ; i--)
	{
       	if(i == 0)
   		{
   			printf("(%d)\n",p3[0]);
   		}
   		else if(i == 1)
   		{
   			printf("(%d)x + ",p3[1]);
   		}
   		else 
   		{
   			printf("(%d)x^%d + ",p3[i],i);
   	        }
	}
}
void Minus(int32_t p1[100],int32_t p2[100],int32_t d1,int32_t d2)
{
	int32_t p4[100]={0};
	int32_t max = 0;
	max = d1;
	if(d2>d1)
	{
		max = d2;
	}
	for(int32_t i = max; i>-1 ; i--)
       {
       	p4[i]=p1[i]-p2[i];
       }
	for(int32_t i = max; i>-1 ; i--)
       {
       	if(i == 0)
   		{
   			printf("(%d)\n",p4[0]);
   		}
   		else if(i == 1)
   		{
   			printf("(%d)x + ",p4[1]);
   		}
   		else 
   		{
   			printf("(%d)x^%d + ",p4[i],i);
   	        }
       }
}       
void cross(int32_t p1[100],int32_t p2[100],int32_t d1,int32_t d2)
{
	int32_t p5[100] = {0};
	for(int i=d1;i>-1;i--)
	{
		for(int j=d2;j>-1;j--)
		{
			p5[i+j]+=p1[i]*p2[j];
		}
	}
	for(int i=d1+d2;i>-1;i--)
	{
       	if(i == 0)
   		{
   			printf("(%d)\n",p5[0]);
   		}
   		else if(i == 1)
   		{
   			printf("(%d)x + ",p5[1]);
   		}
   		else 
   		{
   			printf("(%d)x^%d + ",p5[i],i);
   	        }
       }
}       
       
       
       
       
       
