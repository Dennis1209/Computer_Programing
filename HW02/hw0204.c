#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t y1,m1,d1,y2,m2,d2,a,b,c,d,e,f,total;
    //a=year start b=month start c=day start
    //d=year end e=month end f=day end
    printf("Date Formate: YYYY/MM/DD\n");
    printf("Start Date: ");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("End Date: ");
    scanf("%d/%d/%d",&d,&e,&f);
    
    m1 = (b+9)%12;
    y1 = (a-(m1/10));
    d1 = (365*y1)+(y1/4)-(y1/100)+(y1/400)+(m1*306+5)/10+(c-1);
    m2 = (e+9)%12;
    y2 = d-m2/10;
    d2 = 365*y2+y2/4-y2/100+y2/400+(m2*306+5)/10+(f-1);
    total = d2-d1;

     printf("Duration: %d Day(s)\n",total);
     
     return 0;
}

    
