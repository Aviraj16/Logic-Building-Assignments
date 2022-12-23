#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool ChkVowel( char *str)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str =='a' ||*str =='e' || *str == 'i'||*str =='o'||*str =='u' ||*str =='A' ||*str =='E' || *str == 'I'||*str =='O'||*str =='U')
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
    bool bRet = false;
    
    printf("Enter String\n");
    scanf("%[^'\n']s*",arr);

    bRet=ChkVowel(arr);
    if(bRet==true)
    {
        printf("It contains Vowel\n");
    }
    else
    {
        printf("It  not contains Vowel\n");
    }

    return 0;
}