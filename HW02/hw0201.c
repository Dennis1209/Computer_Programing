#include <stdio.h>
#include <stdint.h>

int main()
{
    float a,b,c =  0;
    printf("Please enter a quadratic polynomial (a,b,c): ");
    scanf("%f,%f,%f",&a,&b,&c);
    if (b*b-(4*a*c)>0)
    {
        printf("Two distinct real roots.\n");
    }
    else if (b*b-(4*a*c)==0)
    {
        printf("One real root.\n");
    }
    else
    {
        printf("No real roots.\n");
    }
    return 0;
}
