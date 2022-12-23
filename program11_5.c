#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd<iStart)
    {
        printf("Invalid Range\n");
    }
    
    for(iCnt = iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    
    printf("Enter Starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);
    RangeDisplayRev(iValue1,iValue2);

    return 0 ;
}