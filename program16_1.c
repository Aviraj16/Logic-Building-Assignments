#include <stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool  Check(int Arr[],int iLength,int iValue)
{
    int iCnt = 0 , iFreq= 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            iFreq++;
        }
    }
    if(iFreq==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0,iValue = 0;
    int *p = NULL;
    bool bRet = FALSE;
    
    printf("Enter Number of element\n");
    scanf("%d",&iSize);

    printf("Enter the number \n");
    scanf("%d",&iValue);

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
    
    bRet = Check(p,iSize,iValue);
    if(bRet ==TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is absent");
    }  

    free(p);
    
    return 0 ;
}