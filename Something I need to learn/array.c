#include <stdio.h>
#include <stdint.h>

int main()
{
   int32_t array1[3][3] = {0};
   int32_t array2[3][3] = {0};
   int32_t array3[3][3] = {0};
   
   for( int i = 0 ; i<3 ; i++ )
   {
       for( int j = 0 ; j<3 ; j++ )
       {
          scanf("%d",&array1[i][j]);
       }
   }
   for( int i = 0 ; i<3 ; i++ )
   {
       for( int j = 0 ; j<3 ; j++ )
       {
          scanf("%d",&array2[i][j]);
       }
   }
   for( int32_t i = 0; i<3; i++ )
   {
      for( int j = 0; j<3 ; j++)
      {   
         int temp = 0;
         temp = array1[i][j]*array2[j][i];
         array[0][i] += temp;
      }
      
   }
   for( int i = 0 ; i<3 ; i++ )
   {
       for( int j = 0 ; j<3 ; j++ )
       {
          printf("%d " , array3[i][j] );
       }
       printf( "\n" );
   }
}
   
         
