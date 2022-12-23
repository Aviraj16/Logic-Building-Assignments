#include <stdio.h>

int KMtoMeter(int iValue)
{
    int iRes = 0;

    iRes = iValue*1000;

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet= 0.0;
    
    printf("Enter Distance\n");
    scanf("%d",&iValue);


    iRet = KMtoMeter(iValue);

    printf("Distance of %d in meter is  %d",iValue,iRet);

    return 0 ;
}