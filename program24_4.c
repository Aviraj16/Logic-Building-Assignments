#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool ChkSpecial( char ch)
{
    if(ch >=33 && ch<=42)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;
    
    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);
    if(bRet==true)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}