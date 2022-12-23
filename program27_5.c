#include<stdio.h>

void StrRevX(char *str)
{
    char *start =NULL;
    char *end =NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start<end)
    {        
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[30];

    printf("Enter String \n");
    scanf("%[^'\n']s*",arr);

    StrRevX(arr);

    printf("Modified String is :%s\n",arr);

    return 0;
}