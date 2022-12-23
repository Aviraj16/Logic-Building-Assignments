#include<stdio.h>
void Pattern(int iRow,int iColumn)
{
    for(int i = 1;i<=iRow;i++)
    {
        for(int j = iColumn;j>0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

}
int main()
{
    int iValue1= 0;
    int iValue2= 0;
    printf("Enter number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}