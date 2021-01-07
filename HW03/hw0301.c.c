#include <stdio.h>

int main()
{
    int row,col;
    char cc;

    printf("Please enter the width: ");
    if(scanf("%d",&col))
    {
        if(col<0)
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
    scanf("%c",&cc);
    printf("Please enter the height: ");
    if(scanf("%d",&row))
    {
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    
    if(col<0||row<0)
    {
       printf("Please enter a positive number\n");
       return 0;
    }
    int arr[1000]={};
    int rowtemp,coltemp;
    rowtemp = row-1;
    coltemp = col;
    
    int n = 0;
    int count = 1;
    
    while(1)
    {
    //right
    if(coltemp!=0&&rowtemp!=0)
    {
       for(int i =0;i<coltemp;i++)
    {
    arr[n] = count;
    count++;
    n++;
    }
    n=n-1+col;
    coltemp--;
    }
    else if(coltemp==0||rowtemp==0)
    {
       for(int i =0;i<coltemp;i++)
       {
       arr[n]=count;
       count++;
       n++;
       }
    n=n-1+col;
    coltemp--;
    break;
    }
    //down
    if(coltemp!=0&&rowtemp!=0)
    {
    for(int i = 0;i<rowtemp;i++)
    {
    arr[n] = count;
    count++;
    n=n+col;
    }
    n=n-col-1;
    rowtemp--;
    }
    else if(coltemp==0||rowtemp==0)
    {
    for(int i=0;i<rowtemp;i++)
    {
    arr[n]=count;
    count++;
    n=n+col;
    }
    n=n-col-1;
    rowtemp--;
    break;
    }
    //left
    if(coltemp!=0&&rowtemp!=0)
    {
    for(int i = 0;i<coltemp;i++)
    {
    arr[n]=count;
    count++;
    n--;
    }
    n=n+1-col;
    coltemp--;
    }
    else if(coltemp==0||rowtemp==0)
    {
    for(int i =0;i<coltemp;i++)
    {
    arr[n]=count;
    count++;
    n--;
    }
    n=n+1-col;
    coltemp--;
    break;
    }
    //up
    if(coltemp!=0&&rowtemp!=0)
    {
    for(int i =0;i<rowtemp;i++)
    {
    arr[n]=count;
    count++;
    n=n-col;
    }
    n=n+col+1;
    rowtemp--;
    }
    else if(coltemp==0||rowtemp==0)
    {
    for(int i=0;i<rowtemp;i++)
    {
    arr[n]=count;
    count++;
    n=n-col;
    }
    n=n+col+1;
    rowtemp--;
    break;
    }
    }
    for(int i=0;i<row*col;i++)
    {
    printf("%8d",arr[i]);
    
    if(i%col==col-1)
    {
    printf("\n");
    }
    }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
