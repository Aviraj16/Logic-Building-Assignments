#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("*");
        
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