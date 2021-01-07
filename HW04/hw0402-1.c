#include <stdio.h>
#include <stdint.h>
#include "hanoi.h"

int main()
{
    int32_t n = 1;
    int32_t a = 1;
    printf("Please enter the disk number (2-20): ");
    if(scanf("%d.%d",&n,&a)==1)
    {
       if( n<2 || n>20)
       {
          printf("Invalid input\n");
          return 0;
       }
    }
    else
    {
        printf("Please enter an integer!\n");
        return 0;
    }
    hanoi(n,1,2,3);
}
