#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include "check.h"

int main()
{   
    int32_t num = 1;
    int32_t x = 1;
    int32_t ans = 1;
    int32_t b[4] = {0};
    int32_t z = 1;
    int32_t a[4] ;
    srand(time(0));
    while(1)
    {   
        
        a[0] = rand()%10;
        a[1] = rand()%10;
        a[2] = rand()%10;
        a[3] = rand()%10;
        
        if( a[0]!=a[1] && a[0]!=a[2] && a[1]!=a[2] && a[2]!=a[3] && a[0]!=a[3] && a[1]!=a[3] && a[0]!=0 )
        {    
             
             break;
        }
    }
    for( int32_t i = 1; i<100000 ; i++ )
    {
         printf("Round %d >>>\n",i);
         printf("    Your Guess: ");
         if(scanf("%d",&ans))
         {      
            b[0] = ans/1000;
            b[1] = (ans - 1000*b[0])/100;
            b[2] = (ans - (1000*b[0] + 100*b[1]))/10;
            b[3] = ans - (1000*b[0] + 100*b[1] + 10*b[2]);        
            if( b[0]==b[1] || b[0]==b[2] || b[1]==b[2] || b[2]==b[3] || b[0]==b[3] || b[1]==b[3] || b[0]==0 )
            {
                   printf("\033[31m    Response: Invalid Guess!\n\033[0m");
                   continue; 
            }
            else if( ans>10000 || ans <1000 )
            {
                   printf("\033[31m    Response: Invalid Guess!\n\033[0m");
                   continue;
            }
         }
         
        else
        {
            printf("\033[31m    Response: Invalid Guess!\n\033[0m");
            continue;
        }
        if( check(a,b) == 0 )
        {
           break;
        }
    }
    return 0;
    
}
   
  
  
    
