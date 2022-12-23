#include <stdio.h>

int  CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumE = 0;
    int iSumO = 0;
    while(iNo!=0)
    {
        iDigit= iNo %10;
        iNo=iNo/10;
    
        if(iDigit%2==0)
        {
            iSumE=iSumE+iDigit;         
        }        
        else
        {
            iSumO=iSumO+iDigit;          
        }
    }
    return iSumE-iSumO;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);
    
    iRet=CountDiff(iValue);    
    printf("%d",iRet);
    return 0 ;
}