#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkSmall(char ch)
{
    if(ch >='a' && ch<='z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }        
}
int main()
{
    int cValue= '\0';
    bool bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }
    return 0;
}