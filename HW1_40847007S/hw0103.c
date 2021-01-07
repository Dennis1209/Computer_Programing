#include <stdio.h>
#include <stdint.h>
int main()
{
    float g,t,v,a = 0;
    printf("Please enter the acceleration due to gravity: ");
    scanf( "%f",&g );
    printf("Please enter the time (s): ");
    scanf( "%f",&t );
    a = 0.5*g*t*t;
    v = g*t;
    printf( "Final velocity: %f m/s\n", v);
    printf( "The altitude: %f m\n", a);
    return 0;
}
