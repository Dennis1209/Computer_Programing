#include "check.h"


int32_t check(int a[4],int b[4])
{    
        int32_t A = 0;
        int32_t B = 0;
        for(int32_t j = 0 ; j<4 ; j++ )
        {  
            if(a[j] == b[j] ) 
            {
              A++;
            }
        }
        if( a[0] == b[0] )
        {
           B++;
        }
        if( a[0] == b[1] )
        {
           B++;;
        }   
        if( a[0] == b[2] )
        {
           B++;
        }
        if( a[0] == b[3] )
        {
           B++;
        }
        if( a[1] == b[0] )
        {
           B++;
        }
        if( a[1] == b[1] )
        {
           B++;
        }
        if( a[1] == b[2] )
        {
           B++;
        }
        if( a[1] == b[3] )
        {
          B++;
        }
        if( a[2] == b[0] )
        {
          B++;
        }
        if( a[2] == b[1] )
        {
          B++;
        }
        if( a[2] == b[2] )
        {
          B++;
        }
        if( a[2] == b[3] )
        {
          B++;
        }
        if( a[3] == b[0] )
        {
          B++;
        }
        if( a[3] == b[1] ) 
        {
          B++;
        }
        if( a[3] == b[2] )
        {
          B++;
        }
        if( a[3] == b[3] )
        {
          B++;
        }
        B = B - A;
        if(A == 4)
        {
           printf("\033[31m Response: Bingo! Congratulations.\n\033[0m");
           return 0;
        }
        else
        {
           printf("\033[31m Response: %d A %d B\n\033[0m",A,B);
        }
        B = 0;
        A = 0;
}
     
         
         
         
         
     
