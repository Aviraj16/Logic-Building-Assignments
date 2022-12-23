#include<stdio.h>
#include<stdlib.h>


typedef int BOOL;

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

int Maximum(PNODE Head)
{

    int iMax = Head->data;
    while( Head != NULL)
    {
        if(iMax < Head->data)
        {
            iMax= Head->data;
        }
        Head = Head->next;
    }

    return iMax;
    

}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = Maximum(First);
    
    printf("Maximum number is :%d",iRet);

    return 0;
}