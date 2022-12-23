#include <stdio.h>

int  Counttwo(int iNo)
{
    int i = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
        iDigit= iNo %10;
        iNo=iNo/10;
        if(iDigit==2)
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
    
    iRet=Counttwo(iValue);    
    printf("%d",iRet);
    return 0 ;
}