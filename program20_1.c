#include<stdio.h>
void Pattern(int iRow,int jColumn)
{
    
    for(int i = 1;i<=iRow;i++)
    {
        char ch = 'A';
        for(int j = 1;j<=jColumn;j++,ch++)
        {
            printf("%c\t",ch);
            
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