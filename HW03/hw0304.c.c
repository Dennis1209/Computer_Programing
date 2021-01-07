#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double s = 0.0;
    double t = 0.0;
    double integral = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;
    double answer = 0.0;
    double i = 0.0;
    double x = 0.0;
    printf("Please enter a quadratic polynomial (ax^2+bx+c): ");
    if(scanf("%lf,%lf,%lf",&a,&b,&c))
    {
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    
    printf("The polynomial is ");
    if (a==0)
    {  
    }
    else if (a==1)
    {
        printf("x^2+");
    }
    else if (a==-1)
    {
        printf("-x^2+");
    }
    else 
    {
        printf("(%lf)x^2+",a);
    }
    if (b==0)
    {
    }
    else if (b==1)
    {
        printf("x+");
    }
    else if (b==-1)
    {
        printf("(-x)+");
    }
    else
    {
       printf("(%lf)x+",b);
    }
    
    if (c==0)
    {
    printf("\n");
    }
    else
    {
      printf("(%lf)\n",c);
    }
    printf("Please enter the interval {s,t}: ");
    scanf("%lf,%lf",&s,&t);
    if (s>=t)
    {
    printf("This is an invalid input.\n");
    return 0;
    }
    x2=t;
    x1=s;
    integral=((a*(1.0/3)*x2*x2*x2)+(b*(1.0/2)*x2*x2)+c*x2)-((a*(1.0/3)*x1*x1*x1)+(b*(1.0/2)*x1*x1)+c*x1);
    printf("The integral: %g\n",integral);
    for (int n=2;n<=65536;n=n*2)
    {   
        answer = 0;
        i=0;
        while(i<=(n-1))
        {
         x=s+(t-s)*1.0/n*i;
         answer = answer+(a*x*x+b*x+c)*(t-s)/n;
         i = i+1;
        }
        printf("The Riemann sum of n=%d: %g\n",n,answer);
        
    }
     return 0;
}
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
