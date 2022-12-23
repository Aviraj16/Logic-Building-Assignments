#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

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

int SearchLastOcc(PNODE Head,int no)
{

    int iCnt = 0, iRet = 0;
    while(Head->next != NULL)
    {
        
        iRet++;
        if(Head->data ==no)
        {
            iCnt++;
        }
        Head = Head->next;
    }
    if(iCnt ==1 || iRet != 0)
    {
        return iRet;
    }
    else
    {
        return -1;
    }

}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    iRet = SearchLastOcc(First,50);
    
    printf("Position is :%d",iRet);

    return 0;
}