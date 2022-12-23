#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkGreater(int iValue)
{
    if(iValue>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet  = FALSE;

    printf("Please Enter Number\n");
    scanf("%d",&iValue);
    
    bRet = ChkGreater(iValue);
    if(iValue>100)
    {
        printf("\nGreater");
    }
    else
    {
        printf("\nSmaller");
    }

    return 0;
}