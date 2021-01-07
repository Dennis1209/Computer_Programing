#include "loop.h"

void loop(int32_t n)
{
    
    int32_t A[21], B[21], C[21];
    //init array
    int32_t passingV = n;
    A[20] = 21, B[20] = 21, C[20] = 21;
    for (int32_t i = 0; i < 20; i++)
    {
        if (i < n)
        {
            A[19 - i] = passingV;
            B[i] = 0;
            C[i] = 0;
            passingV--;
        }
        else
        {
            A[19 - i] = 0;
            B[i] = 0;
            C[i] = 0;
        }
    }
    int32_t moves = mv(n);
    if (n % 2 == 0)
    {
        for (int32_t i = 0; i < moves; i++)
        {
            if (A[gT(A)] < B[gT(B)])
                move(A, B, 2);
            else
                move(B, A, 1);
            i++;
            if (A[gT(A)] < C[gT(C)])
                move(A, C, 3);
            else
                move(C, A, 1);
            i++;
            if (i >= moves)
                break;
            if (i >= moves)
                break;
            if (B[gT(B)] < C[gT(C)])
                move(B, C, 3);
            else
                move(C, B, 2);
        }
    }
    else
    {
        for (int32_t i = 0; i < moves; i++)
        {
            if (A[gT(A)] < C[gT(C)])
                move(A, C, 3);
            else
                move(C, A, 1);
            i++;
            if (i >= moves)
                break;
            if (A[gT(A)] < B[gT(B)])
                move(A, B, 2);
            else
                move(B, A, 1);
            i++;
            if (i >= moves)
                break;
            if (B[gT(B)] < C[gT(C)])
                move(B, C, 3);
            else
                move(C, B, 2);
        }
    }
}
int32_t getEmpty(int32_t *pole)
{
    for (int32_t i = 0; i < 21; i++)
        if (pole[i] != 0)
        {
            //printf("Empty is %d\n", i - 1);
            return i - 1;
        }
    printf("Empty is 19\n");
    return 19;
}
int32_t gT(int32_t *pole)
{
    for (int32_t i = 0; i < 21; i++)
        if (pole[i] != 0)
        {
            //printf("Top is %d\n", pole[i]);
            return i;
        }

    return 21;
}
void move(int32_t *s, int32_t *d, int32_t rod)
{
    printf("Move disk %d to rod %d\n", s[gT(s)], rod);
    d[getEmpty(d)] = s[gT(s)];
    s[gT(s)] = 0;
}
int32_t mv(int32_t n)
{
    int r = 1;
    for (int32_t i = 0; i < n; i++)
        r *= 2;
    return r - 1;
}
