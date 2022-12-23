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


void DisplaySmall(PNODE Head)
{
    int iDigit  = 0, iSmall =0;
    PNODE temp = Head;
    while(temp != NULL)
    {
        iSmall = 9;

        while(temp->data != 0)
        {
            iDigit = temp->data % 10;
            if(iSmall > iDigit)
            {
                iSmall = iDigit;
            }
            temp->data = temp->data /10;
        }
        printf("%d\t",iSmall);
        temp = temp->next;
        iDigit =0;

    }
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,220);
    InsertFirst(&First,11);
    
    Display(First);

    DisplaySmall(First);

    return 0;
}