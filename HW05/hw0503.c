#include <stdio.h>
#include <stdint.h>
#include "operation.h"

int main()
{
   	int32_t d1 = 0;
   	int32_t d2 = 0;
   	int32_t p1[100] = {0};
   	int32_t p2[100] = {0};
   	printf("Please enter p1 degree: ");
   	scanf("%d",&d1);
   	printf("Please enter p1 coefficients: ");
   	for( int32_t i = d1 ; i>-1 ; i--)
   	{
       	scanf("%d",&p1[i]);
   	}
   	printf("Please enter p2 degree: ");	
   	scanf("%d",&d2);
   	printf("Please enter p2 coefficients: ");
   	for( int32_t i = d2 ; i>-1 ; i--)
   	{
       	scanf("%d",&p2[i]);
   	}
   	printf("p1: ");
   	for( int32_t i = d1 ; i>-1 ; i--)
   	{
   		if(i == 0)
   		{
   			printf("(%d)\n",p1[0]);
   		}
   		else if(i == 1)
   		{
   			printf("(%d)x + ",p1[1]);
   		}
   		else 
   		{
   			printf("(%d)x^%d + ",p1[i],i);
   	        }
        }
        printf("p2: ");
        for( int32_t i = d2 ; i>-1 ; i--)
   	{
   		if(i == 0)
   		{
   			printf("(%d)\n",p2[0]);
   		}
   		else if(i == 1)
   		{
   			printf("(%d)x + ",p2[1]);
   		}
   		else 
   		{
   			printf("(%d)x^%d + ",p2[i],i);
   	        }
       }
       printf("p1 + p2: ");
       Add(p1,p2,d1,d2);
       printf("p1 - p2: ");
       Minus(p1,p2,d1,d2);
	printf("p1 * p2: ");
	cross(p1,p2,d1,d2);
       return 0;
}      
       
       
       
       
       
       
       
       
       
       
       
       
        
   	
        
        
