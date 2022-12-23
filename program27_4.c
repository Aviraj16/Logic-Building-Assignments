#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCnt = 0;
    if(*str != ch)
    {
        return -1;
    }
    while(*str != '\0')
    {        
        if(*str ==ch)
        {
            break;           
        }
        iCnt++;
        continue;        
        str++;
    }
    
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter String \n");
    scanf("%[^'\n']s*",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);

    iRet =LastChar(arr,cValue);

    printf("Character location is :%d\n",iRet);

    return 0;
}