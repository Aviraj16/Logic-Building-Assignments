#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    } 
    else
    {
        newn ->next = *Head;
        *Head = newn;
    }
}
void Display(PNODE First )
{
    printf("Elements from the linked list are :\n");
    while(First != NULL)
    {
        printf(" | %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int SecMaximum(PNODE Head)
{
    int iMax1 = 0;
    int iMax2 = 0;
    while( Head != NULL)
    {                   
        if((Head->data)> iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head->data;
        }
        else if((Head->data)>iMax2)
        {
            iMax2 = Head->data;
        }
        Head = Head->next;
    }

    return iMax2;

}
    

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,40);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,10);
    
    

    Display(First);

    iRet = SecMaximum(First);

    printf("Second Maximum number is :%d",iRet);

    return 0;
}