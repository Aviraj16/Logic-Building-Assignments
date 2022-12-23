#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please Enter full name\n");
    scanf("%[^\n]s",&Name);

    printf("%s",Name);

    return 0;

}