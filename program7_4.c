#include<stdio.h>

void OddDisplay(int iNo)
{
    if(iNo <0)
    {
        iNo =-iNo;
    }
    
    {
        for(int i = 1;i<=iNo;i++)
        {
            if(i%2 != 0)
            {
                printf("%d\t",i);
            }
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}