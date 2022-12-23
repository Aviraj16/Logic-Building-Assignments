#include<stdio.h>

void Display(int iNo)
{
    if(iNo <0)
    {
        iNo =-iNo;
    }
    for(int i = -iNo;i<=iNo;i++)
    {
        printf("%d\t",i);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}