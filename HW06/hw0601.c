#include "function.h"
#include <stdio.h>
#include <stdint.h>

int main()
{
	int64_t num = 0;
	int32_t position = 0;
	uint32_t change_num = 0;
	printf("Please enter an integer: ");
	if(scanf("%ld",&num))
	{
	}
	else
	{
		printf("Wrong input");
	}
	while(1)
	{
		printf("The integer: %ld\n",num);
		options(&num);
		printf("Please enter the position (1-8, 0: End): ");
		if(scanf("%d",&position) != 1 || position< 0 || position > 8 )
		{
				printf("Wrong input!");
				break;
		}
		if( position == 0 )
		{
			break;
		}
		else
		{
            		printf("Please enter the new value (0-255): ");
                	if (scanf("%u", &change_num ) != 1 || ( change_num< 0 || change_num > 255))
            		{
                		printf("Wrong input");
                		break;
            		}
			else 
			{
				edit( &num, position, change_num);	
			}
		}	
	}
	return 0;
}
	
