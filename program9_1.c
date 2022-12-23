#include <stdio.h>

void Display(int iNo)
{
    for(int iCnt = 0;iCnt<iNo;iCnt++)
    {
        printf("*\t");
    }
    for(int iCnt = 0;iCnt<iNo;iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}