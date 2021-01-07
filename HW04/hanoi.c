#include "hanoi.h"

void hanoi( int32_t n, int32_t x ,int32_t y ,int32_t z )
{    
    if( n == 1)
    {
       printf("move disk %d to rod %d\n",n,y);
    }
    else
    {
       hanoi( n-1,x,z,y);
       printf( "move disk %d to rod %d\n",n,y);
       hanoi( n-1,z,y,x);
    }
}     
       
       
       
