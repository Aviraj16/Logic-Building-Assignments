#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0, iDigit;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt]%10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt]/10;
        }
        

        printf("%d\t",iSum);
        iSum = 0;
    }
}

int main()
{
    int iSize = 0,iCnt = 0;
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
    
    DigitsSum(p,iSize);

    free(p);
    
    return 0 ;
}