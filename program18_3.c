#include<stdio.h>
void Pattern(int iNo)
{
    for(int i = 1;i<=iNo;i++)
    {
        printf("\t%d\t*",i);

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