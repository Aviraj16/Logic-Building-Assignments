#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }
    else if(iNo >= 0)
    {
    
    
        int iCnt = 0;
        for(iCnt=0;iCnt<=iNo;iCnt++)
        {
            printf("%d",iCnt);
            
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}