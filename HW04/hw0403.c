#include <stdint.h>
#include <stdio.h>
#include "factorial.h"

int main()
{
    int32_t k = 1;
    int32_t i = 1;
    double answer = 1;
    printf( "k-th order Taylor polynomial for e\n" );
    printf( "Please enter k: " );
    if(scanf("%d",&k))
    {
      if(k<=1)
      {
         printf("Please enter an positive integer!!\n");
         return 0;
      }
    }
    else
    {
      printf("Wrong input!\n");
      return 0;
    } 
    answer = 1;
    for( i=1;i<=k;i++ )
    {
        answer=answer+(1.0/factorial(i));
    }
    printf("%.50lf\n",answer);
    return 0;
}
