#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iAns=1,  iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {        
        if(Arr[iCnt]%2 != 0)
        {
            iAns *=Arr[iCnt];
        }        
    }
    if(iAns>1)
    {
        return iAns;
    }
    else
    {
        return 0;
    }


}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;

    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

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
    
    iRet =Product(p,iSize);

    printf("Product is %d\n",iRet);

    free(p);

    return 0;

}   