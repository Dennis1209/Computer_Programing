#include <stdio.h>
#include <stdint.h>

int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,m1,m2= 0 ;
    double x,y = 0;
    // (x1,y1),(x2,y2) first line | (x3,y3),(x4,y4) second line
    printf("Please enter the first line: ");
    scanf("(%lf,%lf),(%lf,%lf)",&x1,&y1,&x2,&y2);
    printf("Please enter the second line: ");
    scanf(" (%lf,%lf),(%lf,%lf)",&x3,&y3,&x4,&y4);
    if (x1==x2&&x3!=x4)
    {
    m2=(y3-y4)/(x3-x4);
    x=x1;
    y=m2*(x-x3)+y3;
    printf("Intersection: (%lf,%lf)\n",x,y);
    }
    else if (x1!=x2&&x3==x4)
    {
    m1=(y1-y2)/(x1-x2);
    x=x3;
    y=m1*(x-x1)+y1;
    printf("Intersection: (%lf,%lf)\n",x,y);
    }
    else if((x1==x2)&&(x3==x4)&&(x1!=x3))
    {
    printf("These two lines have no intersection!\n");
    }
    else if((x1==x2)&&(x3==x4)&&(x1==x3))
    {
    printf("These two lines have unlimited number of intersections!\n");
    }
    else
    {
    m1=(y1-y2)/(x1-x2);
    m2=(y3-y4)/(x3-x4);
    y=((m2*y1)-(m1*y3)-(m1*m2*x1)+(m1*m2*x3))/(m2-m1);
    x=((y-y1)+(m1*x1))/m1;
    printf("Intersection: (%lf,%lf)\n",x,y);
    } 
    return 0;
}
