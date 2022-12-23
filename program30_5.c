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


void DisplayLarge(PNODE Head)
{
    int iDigit  = 0, iLarge =0;
    PNODE temp = Head;
    while(temp != NULL)
    {
        iLarge = 0;

        while(temp->data != 0)
        {
            iDigit = temp->data % 10;
            if(iLarge < iDigit)
            {
                iLarge = iDigit;
            }
            temp->data = temp->data /10;
        }
        printf("%d\t",iLarge);
        temp = temp->next;
        iDigit =0;

    }
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,419);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);
    
    Display(First);

    DisplayLarge(First);

    return 0;
}