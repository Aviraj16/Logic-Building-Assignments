#include <stdio.h>

double FhtoCs(float fTemp)
{
    float fRes = 0.0;

    fRes =(fTemp-32)*0.55556;

    return fRes;
}

int main()
{
    float fValue = 0.0;
    double dRet= 0.0;
    
    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f",&fValue);


    dRet = FhtoCs(fValue);

    printf("Temperature form  Fahrenheit to Celsius is  %f",dRet);

    return 0 ;
}