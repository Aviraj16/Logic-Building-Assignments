#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            iSum=iSum+iCnt;
        }
    }
    if(iEnd<iStart)
    {
        return -1;
    }
    else
    {
        
        return iSum;
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
    iRet = RangeSumEven(iValue1,iValue2);
    if(iRet<0)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition is :%d",iRet);
    }    

    return 0 ;
}