#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue<='z')
    {
        printf("%c",toupper(cValue));
    }
    else if(cValue >= 'A' && cValue<='B')
    {
        printf("%c",tolower(cValue));
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}