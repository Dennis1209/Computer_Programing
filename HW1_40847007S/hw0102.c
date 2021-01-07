#include <stdio.h>
#include <stdint.h>

int main()
{
    int a,b,c,d,e = 0;
    int32_t n = 0;
    int sum = 0;
    printf("Please enter a 5-digits integer: ");
    scanf( "%d",&n);
    a = n/10000;
    b = (n-(10000*a))/1000;
    c = (n-(10000*a+1000*b))/100;
    d = (n-(10000*a+1000*b+100*c))/10;
    e = (n-(10000*a+1000*b+100*c+10*d))/1;
    sum = a*b*c*d*e;
    printf( "Result: %d\n", sum);
    return 0;
}
