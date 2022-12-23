#include<stdio.h>

void Display( char ch)
{
    if(ch >='a' && ch<='z')
    {
        for(int i =0;i<ch;i++)
        {
            printf("%c\t",ch);
            ch--;
        } 
    }
    else if(ch >='A' && ch<='Z')
    {
        for(int i = 0;i<ch;i++)
        {
            printf("%c\t",ch);
            ch++; 
        }
    }
    else
    {
        printf("%c",ch);
    }


}
int main()
{
    char cValue = '\0';
    
    printf("Enter the Character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}