#include<stdio.h>
void Pattern(int iRow,int jColumn)
{
    if(iRow != jColumn)
    {
        printf("Row & Column size is not same");
        return ;
    }
    int j = 0,i= 0;
    for(i = 0;i<iRow;i++)
    {        
        for(j = 0;j<jColumn;j++)
        {
           if(i>=j)
           {
                printf("*\t");
           }
           else
           {
                printf("#\t");
           }
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