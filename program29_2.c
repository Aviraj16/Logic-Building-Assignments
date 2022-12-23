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

int DisplayPrime(PNODE Head)
{

    while( Head != NULL)
    {
        int iSum = 0 , iCnt = 0;
        for(iCnt =2;iCnt<(Head->data)/2;iCnt++)
        {            
            if((Head->data)%iCnt ==0)
            {
                iSum++;
            }
        }
        if(iSum==0)
        {
            printf("%d\t",Head->data);
        }
        Head = Head->next;
    }
    
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;
    
    InsertFirst(&First,21);
    InsertFirst(&First,19);
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    iRet = DisplayPrime(First);

    return 0;
}