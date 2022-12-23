#include<stdio.h>
#include<stdbool.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

char ChkVowel(char cValue)
{
    if(cValue = 'a','e','i','o','u')
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
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet ==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}