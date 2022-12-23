#include <stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("small");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("medium");
    }
    else
    {
        printf("Large");
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0 ;
}