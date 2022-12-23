#include <stdio.h>

double CircleArea(float fRadius)
{
    float fRes = 0.0;
    const float PI = 3.14;

    fRes = PI*fRadius*fRadius;

    return fRes;
}

int main()
{
    float fValue = 0.0;
    double dRet= 0.0;
    
    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle  is %f",dRet);

    return 0 ;
}