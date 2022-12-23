#include <stdio.h>

int Doller(int iNo)
{
    int iRes=0;

    iRes = iNo*70;

    return iRes;
}

int main()
{
    int iValue = 0,iRet= 0;
    
    printf("Enter Number of USD\n");
    scanf("%d",&iValue);

    iRet = Doller(iValue);

    printf("Value in INR is %d",iRet);

    return 0 ;
}