#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumF = 0;
    int iSumN = 0;

    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
            iSumF = iSumF + iCnt;    
        }
        if((iNo % iCnt )!= 0)
        {
            iSumN = iSumN + iCnt;    
        }
    }
    printf("%d\t",iSumF);
    printf("%d",-iSumN);
    return iSumF-iSumN;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("\n%d\n",iRet);

    return 0;
}