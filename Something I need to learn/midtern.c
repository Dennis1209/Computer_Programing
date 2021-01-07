#include <stdint.h>
#include <stdio.h>

int main()
{
    int32_t array[5] = {0};
    printf("Please enter 5 integer: ");
    scanf( "%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4] );
    for( int32_t j = 0 ; j<5 ; j++ )
    {    
         
         for( int32_t i = 0 ; i<5 ;  i++ )
         {
              if( array[i] < array[j] )
              {
                  int32_t temp = 0;
                  temp = array[j];
                  array[j] = array[i];
                  array[i] = temp;
              }
         }
    }
    printf("Midtern is %d\n",array[2]);
    return 0;
}
         
         
         
        
    
