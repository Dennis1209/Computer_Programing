#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int32_t number[6] = {0};
    int32_t x = 1;
    srand( time(0) );
    for(int32_t i = 0 ; i<60000 ; i++)
    { 
        x = random() % 6 + 1;
        if( x == 1 )
        {
            number[0]++;
        }
        if( x == 2 )
        {
            number[1]++;
        }
        if( x == 3 )
        {
            number[2]++;
        }
        if( x == 4 )
        {
            number[3]++;
        }
        if( x == 5 )
        {
            number[4]++;
        }
        if( x == 6)
        {
            number[5]++;
        }
    }
    printf( "1:%d 2:%d 3:%d 4:%d 5:%d 6:%d\n" , number[0],number[1],number[2],number[3],number[4],number[5] );
    return 0;
}
    
    
