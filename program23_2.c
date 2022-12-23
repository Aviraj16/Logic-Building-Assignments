#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkCapital(char ch)
{

    if(ch >='A' && ch<='Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}