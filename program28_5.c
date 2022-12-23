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

int Minimum(PNODE Head)
{

    int iMin = Head->data;
    while( Head != NULL)
    {
        if(iMin > Head->data)
        {
            iMin= Head->data;
        }
        Head = Head->next;
    }

    return iMin;
    

}

int main()
{
    PNODE First = NULL;

    int iRet = 0;
    
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = Minimum(First);
    
    printf("Smallest number is :%d",iRet);

    return 0;
}