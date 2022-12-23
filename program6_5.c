#include<stdio.h>

float Percentage(float iValue1,float iValue2)
{
    float fRes = 0.0f;

    fRes = (iValue2/iValue1)* 100;

    return fRes;

}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter tatal marks ");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks ");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is %f %%",fRet);
    return 0;

}