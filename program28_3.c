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

int Addition(PNODE Head)
{

    int iCnt = 0;
    while( Head != NULL)
    {
        iCnt = Head->data + iCnt;
        Head = Head->next;
    }

    return iCnt;
    

}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    iRet = Addition(First);
    
    printf("Addition is :%d",iRet);

    return 0;
}