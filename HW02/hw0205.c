#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t a,b,c,d,e,suit1,suit2,suit3,suit4,suit5 = 0;
    int32_t num1,num2,num3,num4,num5 = 0;
    printf("Please enter 5 cards: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if ( a<1 || a>52 )
    {
        printf("Wrong Input!\n");
        return 0;
    }
    else if ( b<1||b>52 )
    {
        printf("Wrong Input!\n");
        return 0;
    }
    else if ( c<1||c>52 )
    {
        printf("Wrong Input!\n");
        return 0;
    }
    else if ( d<1||d>52)
    {
        printf("Wrong Input!\n");
        return 0;
    }
    else if ( e<1||e>52)
    {
        printf("Wrong Input!\n");
        return 0;
    }
    suit1 = (a-1)/13;
    suit2 = (b-1)/13;
    suit3 = (c-1)/13;
    suit4 = (d-1)/13;
    suit5 = (e-1)/13;
    num1 = a%13;
    num2 = b%13;
    num3 = c%13;
    num4 = d%13;
    num5 = e%13;
    if ( (suit1==suit2&&suit2==suit3&&suit3==suit4&&suit4==suit5&&(num1+num2+num3+num4+num5)%5==0)||((num1+num2+num3+num4+num5)%5==2&&(num1+num2+num3+num4+num5)/5==9))
    {
        printf("Straight flush\n");
        return 0;
    }
    else if(suit1==suit2&&suit2==suit3&&suit3==suit4&&suit4==suit5)
    {
        printf("Flush\n");
        return 0;
    }
    else if ( ((num1+num2+num3+num4+num5)%5==0)||((num1+num2+num3+num4+num5)%5==2&&(num1+num2+num3+num4+num5)/5==9))
    {
        printf("Straiight\n");
        return 0;
    }
    else if(num1==num2&&num2==num3&&num3==num4&&suit1!=suit2&&suit2!=suit3&&suit3!=suit4)
    {
        printf("Four of a kind\n");
        return 0;
    }
    else if(num1==num2&&num2==num3&&num3==num5&&suit1!=suit2&&suit2!=suit3&&suit3!=suit5)
    {
        printf("Four of a kind\n");
        return 0;
    }
    else if(num2==num3&&num3==num4&&num4==num5&&suit2!=suit3&&suit3!=suit4&&suit4!=suit5)
    {
        printf("Four of a kind\n");
        return 0;
    }
    else if(num1==num3&&num3==num4&&num4==num5&&suit1!=suit3&&suit3!=suit4&&suit4!=suit5)
    {
        printf("Four of a kind\n");
        return 0;
    }
    else if(num1==num2&&num2==num4&&num4==num5&&suit1!=suit2&&suit2!=suit4&&suit4!=suit5)
    {
        printf("Four of a kind\n");
        return 0;
    }
    else if(num1==num2&&num2==num3&&num4==num5&&suit1!=suit2&&suit2!=suit3&&suit4!=suit5)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num1==num2&&num2==num4&&num3==num5&&suit1!=suit2&&suit2!=suit4&&suit3!=suit5)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num1==num2&&num2==num5&&num3==num4&&suit1!=suit2&&suit2!=suit5&&suit3!=suit4)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num1==num3&&num3==num4&&num2==num5&&suit1!=suit3&&suit3!=suit4&&suit2!=suit5)
    { 
        printf("Full house\n");
        return 0;
    }
    else if(num1==num4&&num4==num5&&num2==num3&&suit1!=suit4&&suit4!=suit5&&suit2!=suit3)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num2==num3&&num3==num4&&num1==num5&&suit2!=suit3&&suit3!=suit4&&suit1!=suit5)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num1==num3&&num3==num5&&num2==num4&&suit1!=suit3&&suit3!=suit5&&suit2!=suit4)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num3==num4&&num4==num5&&num1==num2&&suit3!=suit4&&suit4!=suit5&&suit1!=suit2)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num2==num4&&num4==num5&&num1==num3&&suit2!=suit4&&suit4!=suit5&&suit1!=suit3)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num2==num3&&num3==num5&&num1==num4&&suit2!=suit3&&suit3!=suit5&&suit1!=suit4)
    {
        printf("Full house\n");
        return 0;
    }
    else if(num1==num2&&num2==num3&&suit1!=suit2&&suit2!=suit3)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num1==num2&&num2==num4&&suit1!=suit2&&suit2!=suit4)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num1==num2&&num2==num5&&suit1!=suit2&&suit2!=suit5)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num1==num3&&num3==num4&&suit1!=suit3&&suit3!=suit4)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num1==num3&&num3==num5&&suit1!=suit3&&suit3!=suit5)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num1==num4&&num4==num5&&suit1!=suit4&&suit4!=suit5)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num2==num3&&num3==num4&&suit2!=suit3&&suit3!=suit4)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num2==num3&&num3==num5&&suit2!=suit3&&suit3!=suit5)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num2==num4&&num4==num5&&suit2!=suit4&&suit4!=suit5)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num3==num4&&num4==num5&&suit3!=suit4&&suit4!=suit5)
    {
        printf("Three of a kind\n");
        return 0;
    }
    else if(num1==num2&&num3==num4&&suit1!=suit2&&suit3!=suit4)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num2&&num3==num5&&suit1!=suit2&&suit3!=suit5)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num2&&num4==num5&&suit1!=suit2&&suit4!=suit5)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num3&&num2==num4&&suit1!=suit3&&suit2!=suit4)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num3&&num2==num5&&suit1!=suit3&&suit2!=suit5)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num3&&num4==num5&&suit1!=suit3&&suit4!=suit5)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num4&&num2==num3&&suit1!=suit4&&suit2!=suit3)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num4&&num2==num5&&suit1!=suit4&&suit2!=suit5)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num4&&num3==num5&&suit1!=suit4&&suit3!=suit5)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num5&&num2==num3&&suit1!=suit5&&suit2!=suit3)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num5&&num2==num4&&suit1!=suit5&&suit2!=suit4)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num5&&num3==num4&&suit1!=suit5&&suit3!=suit4)
    {
        printf("Two pair\n");
        return 0;
    }
    else if(num1==num2&&suit1!=suit2)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num1==num3&&suit1!=suit3)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num1==num4&&suit1!=suit4)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num1==num5&&suit1!=suit5)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num2==num3&&suit2!=suit3)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num2==num4&&suit2!=suit4)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num2==num5&&suit2!=suit5)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num3==num4&&suit3!=suit4)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num3==num5&&suit3!=suit5)
    {
        printf("One pair\n");
        return 0;
    }
    else if(num4==num5&&suit4!=suit5)
    {
        printf("One pair\n");
        return 0;
    }
    else
    {
        printf("High card\n");
    }
    return 0;
}
    
     
    

    
