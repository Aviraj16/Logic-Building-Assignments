#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool ChkChar( char *str, char cValue)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str ==cValue)
        {
            iCnt++;
            break;
        }
        str++;
        
    }
    if(iCnt==1)
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
    char arr[20];
    char cValue = '\0';
    bool bRet = false;
    
    printf("Enter String\n");
    scanf("%[^'\n']s*",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr,cValue);
    if(bRet==true)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character Not Found\n");
    }

    return 0;
}