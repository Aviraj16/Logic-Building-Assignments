#include<stdio.h>

typedef int bool;

#define TRUE 1;
#define FALSE 0;

bool ChkEqual(int iValue1,int iValue2)
{
    if(iValue1==iValue2)
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
    int iValue1 = 0;
    int iValue2 = 0;

    bool bRet = FALSE;

    printf("Please enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(iValue1==iValue2)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;

}