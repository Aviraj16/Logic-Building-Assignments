#include<stdio.h>
void Pattern(int iNo)
{

        int iCnt = 0;
        char ch = 'A';
        for(int j = 1;j<=iNo;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");

}
int main()
{
    int iValue= 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}