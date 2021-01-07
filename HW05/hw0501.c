#include <stdint.h>
#include <stdio.h>
#include "test.h"
#include "sort.h"

int main()
{
    int32_t odd[10] = {0};
    int32_t even[10] = {0};
    int32_t i = 0;
    int32_t c = 0;
    int32_t d = 0;
    printf("Before:\n");
    for(int32_t i = 0 ; i<10 ; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(int32_t i = 0 ; i < 10 ; i++)
    {
        if ( array[i] % 2 == 1 )
        {
            odd[c] = array[i];
            c++;
        }
        if ( array[i] % 2 == 0 )
        {
            even[d] = array[i];
            d++;
        }
    }
    sort(odd,even,c,d);    
    return 0;
}
