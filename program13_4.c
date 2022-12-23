#include <stdio.h>

int  CountRange(int iNo)
{
    int i = 0;
    int iDigit = 0;
    int iMult = 1;

    while(iNo!=0)
    {
        iDigit= iNo %10;
        iNo=iNo/10;
        if(iDigit==0)
        {
            iDigit =1;
        }
        
        iMult= iMult*iDigit;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);
    
    iRet=CountRange(iValue);    
    printf("%d",iRet);
    return 0 ;
}