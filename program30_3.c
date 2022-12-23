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

int SumDigit(int iNo)
{
    int iMult = 1, iDigit = 0;
    if(iNo%10 == 0)
    {
        iNo = iNo/10;
    }

    while(iNo != 0) 
    {
        iDigit = iNo %10;
        iMult = iMult * iDigit ;
        iNo = iNo / 10;
    }
    return iMult;
}

void DisplaySum(PNODE Head)
{
    int iRet = 1;
    while(Head != NULL)
    {
        iRet = SumDigit(Head->data);
        printf("%d\t",iRet);
        Head= Head->next;

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

    DisplaySum(First);

    return 0;
}