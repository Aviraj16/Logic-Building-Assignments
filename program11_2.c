#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
    if(iEnd<iStart)
    {
        printf("Invalid Number");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter Starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);


    RangeDisplayEven(iValue1,iValue2);

    return 0 ;
}