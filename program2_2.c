#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while( iCnt<=iNo)
    {
        printf("*");
        iCnt++;       
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);
    printf("The entered number is %d\n ",iValue);
    
    
    Display(iValue);

    return 0;
}