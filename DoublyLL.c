#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct  node *rptr;
    struct node *lptr;
}node;
//printing the linked list
void printlist(struct node *ptr)
{
    while(ptr!= NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->rptr;
    }
    printf("\n");
}


void printReverse(struct node *ptr)
{
    struct node* last;
    while(ptr!= NULL)
    {
        last = ptr;
        ptr = ptr->rptr;
    }
    while(last!= NULL)
    {
        printf("%d ", last->data);
        last = last->lptr;
    }
    printf("\n");
}

int main()
{
    struct node *head  = (struct node*)malloc(sizeof(struct node));
    struct node* first = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

head->data = 1;
head->lptr = NULL;
head->rptr = first;

first->data = 2;
first->lptr = head;
first->rptr = second;

second->data = 3;
second->lptr = first;
second->rptr = third;

third->data = 4;
third->lptr = second;
third->rptr = fourth;

fourth->data = 5;
fourth->lptr = third;
fourth->rptr = NULL;

printlist(head); 
printReverse(head);
    return 0;
}