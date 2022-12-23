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

void DisplayPalindrome(PNODE Head)
{
        int iDigit = 0, iRev = 0;
        while( Head != NULL)
        { 
            int iTemp = Head->data;            
            while(Head->data != 0)
            {                                
                iDigit = (Head->data)%10;
                iRev = iRev * 10 + iDigit;
                Head->data= (Head->data)/10;                                                             
            }

            if(iRev==iTemp)
            {
                printf("%d\t",iRev);
            } 
            Head = Head->next;
            iRev = 0;
            
        }             
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    
    Display(First);

    DisplayPalindrome(First);

    return 0;
}