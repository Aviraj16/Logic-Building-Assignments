#include <stdio.h>
#include<stdlib.h>

int  CountEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEven = 0,iOdd = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    return iEven-iOdd;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;
    
    printf("Enter Number of element\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p ==NULL)
    {
        printf("unable to locate memory");
        return -1;
    }
    printf("enter %d elements\n",iSize);

    for(iCnt= 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = CountEven(p,iSize);  
    printf("Result is %d",iRet);  

    free(p);
    
    return 0 ;
}