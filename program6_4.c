#include<stdio.h>


int Multiply(int iValue1,int iValue2, int iValue3)
{
    if(iValue2==0 &&iValue3==0)
    {
        return iValue1;
    }
    if(iValue1==0 &&iValue2==0)
    {
        return iValue3;
    }
    if(iValue3==0 &&iValue1==0)
    {
        return iValue2;
    }
    if(iValue1==  0)
    {
        return iValue2*iValue3;
    }
    if(iValue2==  0)
    {
        return iValue1*iValue3;
    }
    if(iValue3== 0)
    {
        return iValue1*iValue2;
    }
    
    else
    {
        return iValue1*iValue2*iValue3;
    }

}

int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0, iRet  =0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d",iRet);
    return 0;

}