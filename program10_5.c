#include <stdio.h>

double SqureMeter(float fValue)
{
    float fRes = 0.0;

    fRes =(fValue)*0.0929;

    return fRes;
}

int main()
{
    float fValue = 0.0;
    double dRet= 0.0;
    
    printf("Enter Area in Square feet\n");
    scanf("%f",&fValue);


    dRet = SqureMeter(fValue);

    printf("Area in Square Meter is %f",dRet);

    return 0 ;
}