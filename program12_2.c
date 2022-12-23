#include <stdio.h>
#define FALSE 0
#define TRUE 1
typedef int bool;

bool  ChkZero(int iNo)
{
    int i = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
        iDigit= iNo %10;
        iNo=iNo/10;
        if(iDigit==0)
        {
           i++;
           break;
        }
    }
    if(i==1)
    {
        return TRUE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);
    
    bRet=ChkZero(iValue);
    if(bRet ==TRUE)
    {
        printf("It Contains Zero;");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0 ;
}