#include <stdio.h>
#include <stdint.h>
#include "function.h"

int main()
{
	int32_t x = 0;
	int32_t index = 0;
	int32_t Max = 0;
	int32_t *buffer = calloc(10,sizeof(int32_t)); //獲取10個4byte的空間
	for(int32_t i = 1 ; i < 10 ; i++)
	{
		*(buffer+i) = -1;//初始化
	}
	while(1)
	{
		printf("input: ");
		if( scanf("%d",&x) != 1 || x < -2 )
		{
			printf("Wrong input");
			continue;
		}
		else if ( x  == 0)
		{
			printNumber(buffer,index);
			break;
		}
		else if (x == -1)
		{
			if (index != 0)
			{
				index--;
			}
			else
			{
				printf("There is no number to undo!");
			}
		}
		else if( x == -2)
		{
			if(index <= 9 && Max > index)
			{
				index++;
			}
			else
			{
				printf("There is no number to redo!\n");
			}
		}
		else
		{
			if( index == 10 )
			{
				Max = 11;
				TenNum(buffer);
				*(buffer + index - 1) = x;
				
			}
			else
			{
				*(buffer + index) = x;
				index++;
				if( index == Max )
				{
					Max++;
				}
			}
		}
	}
	return 0;
}
		
			
			
			
			
			
			
			
			
				
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
