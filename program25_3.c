#include<stdio.h>

int Difference( char *str)
{
    int iCnt = 0;
    int iCnt1 = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
            iCnt++;
        }
        if(*str >='a'&& *str <='z')
        {
            iCnt1++;
        }
        str++;
    }
    return iCnt1-iCnt;


}
int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter String\n");
    scanf("%[^'\n']s*",arr);

    iRet =Difference(arr);
    printf("%d",iRet);

    return 0;
}