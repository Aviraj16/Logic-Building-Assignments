#include <stdio.h>

int  Count(int iNo)
{
    int i = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
        iDigit= iNo %10;
        iNo=iNo/10;
        if(iDigit<6)
        {
           i++;
        }
    }
    return i;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);
    
    iRet=Count(iValue);    
    printf("%d",iRet);
    return 0 ;
}