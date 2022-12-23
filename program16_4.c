#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iStart, int iEnd)
{
    int i=0;int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++,i++)
    {
        if(Arr[i]>iStart && Arr[i]<iEnd)
        {
            printf("%d\t",Arr[i]);
        }
        else
        {
            printf("There is no elements in this range\n");
            break;
        }

    }
}

int main()
{
    int iLength = 0,iRet = 0,iCnt = 0,iValue1 =0,iValue2 = 0;

    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    printf("Enter the Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point\n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iLength * sizeof(int));

    if(p ==NULL)
    {
        printf("unable to locate memory");
        return -1;
    }
    printf("enter %d elements\n",iLength);

    for(iCnt= 0;iCnt<iLength;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    Range(p,iLength,iValue1,iValue2);

    free(p);

    return 0;

}   