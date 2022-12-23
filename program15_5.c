#include <stdio.h>
#include<stdlib.h>


int  Frequency(int Arr[],int iLength, int iFrequency)
{
    int iCnt = 0 , iFreq= 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iFrequency)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0 ,iFreq = 0;
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
    printf("Enter element to find out its Frequency\n");
    scanf("%d",&iFreq);
    
    iRet = Frequency(p,iSize,iFreq);
    printf("frequency of %d is %d",iFreq,iRet) ;

    free(p);
    
    return 0 ;
}