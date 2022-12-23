#include<stdio.h>

int MultiFact(int iNo)
{
    int i= 0;
    int iCnt = 1;

    for(i =1;i<=(iNo/2);i++)
    {
        if((iNo%i)==0)
        {
            printf("%d\t",i);
            iCnt= iCnt*i;            
        }
        // iCnt++;         
    }
    return iCnt;       
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("Multiplication of factors is :%d\n",iRet);

    return 0;
}