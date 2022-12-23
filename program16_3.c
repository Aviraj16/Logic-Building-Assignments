#include <stdio.h>
#include<stdlib.h>

int  LastOcc(int Arr[],int iLength,int iValue)
{
    int iCnt = 0,i= 0;
    for(iCnt=(iLength-1);iCnt>1;iCnt--)
    {
        if(Arr[iCnt]==iValue)
        {
            i++;
            break;
        }
    }
    if(i==1)
    {

        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0,iValue = 0;
    int *p = NULL;
    
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
    
    iRet = LastOcc(p,iSize,iValue);
    if(iRet ==-1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Last occurrence of number is %d",iRet);
    }  

    free(p);
    
    return 0 ;
}