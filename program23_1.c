#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkAlpha(char ch)
{

    if(ch >='a' && ch<='z' || ch>='A' && ch<='Z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}