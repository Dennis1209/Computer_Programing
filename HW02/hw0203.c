#include <stdio.h>
#include <stdint.h>

int main()
{
    double a,b,c,d,e,f,g,h,Total = 0.0;
    printf("Gross salary: ");
    scanf("%lf",&a);
    printf("Married? (0/1): ");
    scanf("%lf",&b);
    printf("How many people are there in your family: ");
    scanf("%lf",&c);
    printf("How many people in your family have income: ");
    scanf("%lf",&d);
    printf("Special Deduction for Savings and Investment(0/1): ");
    scanf("%lf",&e);
    printf("Special Deduction for Tuition: ");
    scanf("%lf",&f);
    printf("How many preschool children: ");
    scanf("%lf",&g);
    printf("How many disable people: ");
    scanf("%lf",&h);
    if ( b==0 )
    {
       Total=a-120000;
    }
    else if( b==1 )
    {
       Total=a-240000;
    }
    else 
    {
    printf("This is a wrong number!");
    }
    Total=Total-(c*88000)-(d*200000);
    if ( e==0 )
    {
        Total=Total;
    }
    else if ( e==1 )
    {
        Total=Total-270000;
    }
    else 
    {
        printf("This is a wrong number!");
    }
    Total=Total-(f*25000)-(g*120000)-(h*200000);
    if ( 540000>=Total&&Total>=0 )
    {
         Total=Total*0.05;
         printf("Total tax: %lf\n",Total);
    }
    else if ( 1210000>=Total&&Total>=540001 )
    {
         Total=(Total*0.12)-37800;
         printf("Total tax: %lf\n",Total);
    }
    else if ( 2420000>=Total&&Total>=1210001 )
    {
         Total=(Total*0.2)-134600;
         printf("Total tax: %lf\n",Total);
    }
    else if ( 4530000>=Total&&Total>=2420001 ) 
    {    
         Total=(Total*0.3)-376600;
         printf("Total tax: %lf\n",Total);
    }
    else if ( Total>=4530001 )
    {
         Total=(Total*0.4)-829600;
         printf("Total tax: %lf\n",Total);
    }
    else 
    {
         printf("Error number");
    }
    return 0;
}
    
