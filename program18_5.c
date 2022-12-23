#include<stdio.h>
void Pattern(int iNo)
{
    for(int i = 1;i<=iNo;i++)
    {
        printf("%d\t",i*2);

    }

}
int main()
{
    int iValue= 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}