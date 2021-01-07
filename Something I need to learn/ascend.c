#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand( time(0) );
    int32_t array[10] = {0};
    
    for( int32_t i = 0 ; i<10 ; i++ )
    {    
         array[i] = random() % 10000;         
         printf("%d ",array[i]);
    }
    printf("\n");
    
    for( size_t j = 0 ; j<10 ; j++ )
    {
         for( size_t i = j ; i<10 ; i++ )
         {     
             if( array[i]<array[j] )
             { 
             int32_t temp = 0;
             temp = array[j];
             array[j] = array[i];
             array[i] = temp;
             }
         }
    }
    for( size_t i = 0; i<10 ; i++ )
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
             
               
    
