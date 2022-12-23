#include<stdio.h>
void Pattern(int iRow,int jColumn)
{
    
    for(int i = 1;i<=iRow;i++)
    {
        int iNo = 1;
        for(int j = 1;j<=jColumn;j++)
        {            
            if(i%2==0)
            {
                if(iNo%2==1)
                {
                    printf("%d\t",iNo);
                    iNo=iNo+2;
                }
            }
            else
            {
                printf("%d\t",iNo*2);
                iNo++;
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