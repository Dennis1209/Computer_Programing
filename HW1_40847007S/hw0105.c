#include <stdio.h>
#include <stdint.h>
int main()
{
    int32_t a = 1;
    printf("Please enter an integer: ");
    scanf( "%d", &a );
    printf("%d:%08x\n",a, a);
    return 0;
}
