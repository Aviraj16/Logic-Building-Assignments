#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iMult = iNo;
    if(iNo <0)
    {
        iNo =-iNo;
    }
    for(int i=1;i<=5;i++)
    {
        printf("%d\t",i*iNo);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}