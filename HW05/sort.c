#include "sort.h"

void sort( int32_t a[10] , int32_t b[10], int32_t x, int32_t y )
{
    for( int32_t j = 0 ; j<x ; j++ )
    {
         for( int32_t i = 0 ; i<x ; i++ )
         {     
             if( a[i]>a[j] )
             { 
             int32_t temp = 0;
             temp = a[j];
             a[j] = a[i];
             a[i] = temp;
             }
         }
    }
    for( int32_t j = 0 ; j<y ; j++ )
    {
         for( int32_t i = 0 ; i<y ; i++ )
         {     
             if( b[i]<b[j] )
             { 
             int32_t temp = 0;
             temp = b[j];
             b[j] = b[i];
             b[i] = temp;
             }
         }
    }
    printf("After:\n");
    for( int32_t i = 0 ; i<x ; i++ )
    {
        printf("%d ",a[i]);
    }
    for( int32_t i = 0 ; i<y ; i++ )
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}
