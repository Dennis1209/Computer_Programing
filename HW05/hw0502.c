#include <stdio.h>
#include <stdint.h>
#include "test2.h"
#include "determinant.h"

int main()
{   int32_t answer = 0;
    printf("The matrix is\n");
    for( int32_t i = 0 ; i<4 ; i++ )
    {
        for( int32_t j = 0 ; j<4 ; j++)
        {
            printf("%d ",matrix[i][j] );
        }
        printf("\n");
    }
    answer = determinant(matrix);
    printf("The determinant is %d\n",answer);
    return 0;
}
