#include <stdio.h>
#include <stdint.h>
#include "Roman.h"

int main()
{
    int32_t input = 1;
    int32_t a = 1;
    printf( "Please enter an integer(1~3000): " );
    if(scanf("%d.%d",&input,&a)==1)
    {
       if(input>3000||input<1)
       {
           printf("Please enter an(1~3000) integer!\n");
           return 0;
       }
    }
    else
    {
        printf("Wrong format!\n");
        return 0;
    } 
    Roman( input);
    return 0;
}
