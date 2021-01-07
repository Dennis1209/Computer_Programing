#include <stdio.h>
#include <stdint.h>

int main()
{
    double input = 0;
    int32_t state = 0;
    
    
    while(printf("Start\n"))
    {
    printf("Please enter an integer: ");
    if(scanf("%lf",&input))
    {
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    switch(state)
    {
    case 0:
       if (input==10||input==35)
       {
          state = 1;
          printf("S1\n");
          break;
       }
       else if (input==11)
       {   
           state = 3;
           printf("S3\n");
           break;
       }
       else if (input==20||input==78)
       {   
          state = 5;
          printf("S5\n");
          break;
       }
       else 
       {   
          state = 0;
          printf("Start\n");
          break;
       }
    case 1:
       if (input==19)
       {   
          state = 2;
          printf("S2\n");
          break;
       }
       else if (input==12||input==36)
       {   
          state = 6;
          printf("S6\n");
          break;
       }
       else
       {   
          state = 1;
          printf("S1\n");
          break;
       }
   case 2:
       if (input==43)
       {   
          state = 2;
          printf("S2\n");
          break;
       }   
       else if (input==99)
       {   
          state = 7;
          printf("Final\n");
          return 0;
          
       }
       else
       {
          state = 0;
          printf("Start\n");
          break;
       }
  case 3: 
       {
           state=4;
           printf("S4\n");
           break;
       }
       
  case 4:
       {
          state = 6;
          printf("S6\n");
          break;
       }
  case 5:
       if (input==1)
       {   
          state = 4;
          printf("S4\n");
          break;
       }
       else if (input==2)
       {   
          state = 6;
          printf("S6\n");
          break;
       }
       else
       {   
          state = 0;
          printf("Start\n");
          break;
       }
  case 6:
       if (input==108)
       {   
          state = 7;
          printf("Final\n");
          return 0;
       }
       else
       {   
          state = 5;
          printf("S5\n");
          break;
       }
  /*case 7:
       {
          state = 7;
          printf("Final\n");
          return 0;
       }*/
       
  }
  printf("Please enter a integer: ");
  scanf("%lf",&input);
  }
   return 0;
}
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        
