#include<stdio.h>

int CountChar(char *str,char cValue)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        
        if(*str ==cValue)
        {
            iCnt++;
        }
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

    iRet =CountChar(arr,cValue);

    printf("Character Frequency is :%d\n",iRet);


    return 0;
}