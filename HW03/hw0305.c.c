#include <stdio.h>
#include <stdint.h>

int main()
{   
    double payment = 0.0;
    double Iff1 = 0.0;
    double Iff2 = 0.0;
    double Iff3 = 0.0;
    double Iff4 = 0.0;
    double Iff5 = 0.0;
    double Ifo = 0.0;
    double Mipf = 0.0;
    int32_t Age = 0.0;
    double Hmyop = 0.0;
    double Earoir = 0.0;
    double totalYear = 0.0;
    double totalPayment = 0.0;
    int32_t year = 0.0;
    double value = 0.0;
    double Fvalue = 0.0;
    double Fvalue2 = 0.0;
    double Fvalue3 = 0.0;
    double Fvalue4 = 0.0;
    double Fvalue5 = 0.0;
    double Fvalue6 = 0.0;
    double Ic = 0.0;
    
    
    printf("SIP Plan\n");
    printf("Annually payment: ");
    if(scanf("%lf",&payment))
    {
        if(payment<=0)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("Insurance fee in the first five years (0 is assumed afterwards): ");
    if(scanf("%lf,%lf,%lf,%lf,%lf",&Iff1,&Iff2,&Iff3,&Iff4,&Iff5))
    {
        if(Iff1<=0||Iff2<=0||Iff3<=0||Iff4<=0||Iff5<=0)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("Insurance fee off: ");
    if(scanf("%lf",&Ifo))
    {
        if(Ifo<0)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("Monthly insurance processing fee: ");
    if(scanf("%lf",&Mipf))
    {
        if(Mipf<0)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("Age: ");
    if(scanf("%d",&Age))
    {
        if(Age<0)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("How many years of payment: ");
    
    if(scanf("%lf",&Hmyop))
    {
        if(Hmyop<6)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("Expected annual return on investment rate: "); 
    if(scanf("%lf",&Earoir))
    {
        if(Earoir<0)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("-----------------------------\n");
    printf("Your Payment and Account Value Table\n");
    Iff1=Iff1*0.01;
    Iff2=Iff2*0.01;
    Iff3=Iff3*0.01;
    Iff4=Iff4*0.01;
    Iff5=Iff5*0.01;
    Ifo=Ifo*0.01;
    Earoir=Earoir*0.01/12.0;
    
    
    //first year
     if(Age<20)
        {
        Ic=2000;
        }
        else
        {
        Ic=100.0*(Age-20)+2000;
        }
     if(year<=Hmyop)
     {
        year++;
     }
        
     Fvalue=payment*(1-Iff1+Ifo)-(100.0*(Age-20)+2000);    
     for(int month = 1;month<=11;month++)
     {
        Fvalue=(Fvalue-Mipf)*(1+Earoir); 
     }
     totalPayment=payment*year;
     
     printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
    //second year
     Age++;
     if(Age<20)
        {
        Ic=2000;
        }
        else
        {
        Ic=100.0*(Age-20)+2000;
        }
        if(year<=Hmyop)
        {
        year++;
        }
     Fvalue=Fvalue+(payment*(1-Iff2+Ifo)-(100.0*(Age-20)+2000));
     for(int month = 1;month<=12;month++)
     {
        Fvalue=(Fvalue-Mipf)*(1+Earoir); 
     }
     totalPayment=payment*year;
     printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
     //third year
     Age++;
     if(Age<20)
     {
        Ic=2000;
     }
        else
        {
        Ic=100.0*(Age-20)+2000;
        }
        if(year<=Hmyop)
        {
           year++;
        }
     Fvalue=Fvalue+payment*(1-Iff3+Ifo)-(100.0*(Age-20)+2000);
     for(int month = 1;month<=12;month++)
     {
        Fvalue=(Fvalue-Mipf)*(1+Earoir); 
     }
     totalPayment=payment*year;
     printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
     //4th year
     Age++;
     if(Age<20)
        {
        Ic=2000;
        }
        else
        {
        Ic=100.0*(Age-20)+2000;
        }
        if(year<=Hmyop)
        {
           year++;
        }
     Fvalue=Fvalue+payment*(1-Iff4+Ifo)-(100.0*(Age-20)+2000);
     for(int month = 1;month<=12;month++)
     {
        Fvalue=(Fvalue-Mipf)*(1+Earoir); 
     }
     totalPayment=payment*year;
     printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
     //5th year
     Age++;
     if(Age<20)
        {
        Ic=2000;
        }
        else
        {
        Ic=100.0*(Age-20)+2000;
        }
        if(year<=Hmyop)
        {
           year++;
        }
        totalPayment=payment*year;
     Fvalue=Fvalue+payment*(1-Iff5+Ifo)-(100.0*(Age-20)+2000);
     for(int month = 1;month<=12;month++)
     {
        Fvalue=(Fvalue-Mipf)*(1+Earoir); 
     }
     printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
     //6th~15th year
     for(year=5;year<Hmyop;year++)
     {
        Age++;   
     if(Age<20)
        {
        Ic=2000;
        }
        else
        {
        Ic=100.0*(Age-20)+2000;
        }
     Fvalue=Fvalue+payment-(100.0*(Age-20)+2000);
     for(int month = 1;month<=12;month++)
     {
        Fvalue=(Fvalue-Mipf)*(1+Earoir); 
     }
     totalPayment=payment*(year+1);
     printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
     }
     
     //other years to 100
     for(Age=Age+1;Age<=100;Age++)
     {
        if(Age<20)
        {
           Ic=2000;
        }
        else
        {
           Ic=100.0*(Age-20)+2000;
        }
        Fvalue=Fvalue-(100.0*(Age-20)+2000);
        for(int month = 1;month<=12;month++)
        {
            Fvalue=(Fvalue-Mipf)*(1+Earoir); 
        }
        
        printf("%d: %lf, %lf\n",Age,totalPayment,Fvalue);
     }
}
          
         

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
