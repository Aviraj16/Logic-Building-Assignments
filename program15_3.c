#include <stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool  Check(int Arr[],int iLength)
{
    int iCnt = 0 , iFreq= 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
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
    int iSize = 0,iCnt = 0,bRet = 0;
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
    
    bRet = Check(p,iSize);
    if(bRet ==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }  

    free(p);
    
    return 0 ;
}