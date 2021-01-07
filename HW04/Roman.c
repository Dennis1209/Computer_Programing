#include "Roman.h"

int32_t Roman( int32_t input )
{   
    int32_t num1 = 1;
    int32_t num2 = 1;
    int32_t num3 = 1;
    int32_t last = 1;  
    
    num1 = input/1000;
    for (int i = 0; i < num1 ; i++)
    {
        printf("M");
    }   
    input -= num1*1000;
    num2 = input/100;
    if( input/100 == 9 )
    {
        printf("CM");
        input -= 900;
    }
    else if( input/100==6 )
    {
        printf("DC");
        input -= 600;
    }
    else if( input/100==7 )
    {
        printf("DCC");
        input -= 700;
    }else if( input/100==8 )
    {
        printf("DCCC");
        input -= 800;
    }
    else if( input/100==5 )
    {
        printf("D");
        input -= 500;
    }
    else if( input/100==4 )
    {
        printf("CD");
        input -= 400;
    }
    else
    {
        for (int i = 0; i < num2 ; i++)
        {
             printf("C");
        }   
        input -= num2*100;
    }
    num3 = input/10;
    if( input/10 == 9 )
    {
        printf("XC");
        input -=90;
    }
    else if( input/10 ==5 )
    { 
        printf("L");
        input -=50;
    }
    else if( input/10 ==6 )
    { 
        printf("LX");
        input -=60;
    }
    else if( input/10 ==7 )
    { 
        printf("LXX");
        input -=70;
    }else if( input/10 ==8 )
    { 
        printf("LXXX");
        input -=80;
    }
    else if( input/10 ==4 )
    {
        printf("XL");
        input -=40;
    }
    else
    {   
        for (int i = 0; i < num3 ; i++)
        {
             printf("X");
        }   
        input -= num3*10;
    }
    last = input;
    if( input == 9)
    {
        printf("IX");
        input -= 9;
    }
    else if( input == 5 )
    {
        printf("V");
        input -= 5;
    }
    else if( input == 6 )
    {
        printf("VI");
        input -= 6;
    }else if( input == 7 )
    {
        printf("VII");
        input -= 7;
    }else if( input == 8 )
    {
        printf("VIII");
        input -= 8;
    }
    else if( input ==4 )
    {
        printf("IV");
        input -=4;
    }
    else
    {
        for (int i = 0; i < last ; i++)
        {
             printf("I");
        }   
        
    }
    printf("\n");
    return 0;
}
    
    
        
        
        
        
        
        
        
        
        
        
    
         
    
