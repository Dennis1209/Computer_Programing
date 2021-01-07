#include <stdint.h>
#include <stdio.h>
#include "resis.h"


int main()
{   
    int32_t resistance = 1;
    int32_t n = 1;
    double ans = 1.0;
    
    printf("Please enter the resistance (1-100): " );
    if( scanf( "%d",&resistance ))
    {
        if( resistance>100 || resistance<1 )
        {
             printf( "Please enter a (1-100) integer!" );
             return 0;
        }
    }
    else
    {
        printf( "Wrong input" );
        return 0;
    }
    
    printf( "Please enter n (1-100): " );
    if( scanf( "%d",&n ))
    {
        if( n>100 || n<1 )
        {
             printf( "Please enter a (1-100) integer!" );
             return 0;
        }
    }
    else
    {
       printf( "Wrong input" );
       return 0;
    }
    
    ans = resis( n,resistance );
    
    printf("Ans: %lf\n",ans);
    return 0;
}
    
    
