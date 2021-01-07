#include <stdio.h>
#include <stdint.h>

int main()
{   
    int32_t nN,firstDigit,lastDigit,d,n=1;
    //int32_t d=1;
    printf("Please enter a natural number : ");
    if(scanf("%d",&nN))
    {
       if (nN<0||nN>2147483647)
       {
             printf("This is not a natural number\n");
             return 0;
       }     
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    
    n=nN;
    lastDigit=nN%10;
    while(nN)
    {
         if(nN/10==0)
             firstDigit=nN%10;
         else 
         {
             lastDigit*=10;
             d*=10;
         }
         nN/=10;
    }
    n=lastDigit+((n/10*10+firstDigit)%d);   
    printf("%d\n",n);
    return 0;
}

