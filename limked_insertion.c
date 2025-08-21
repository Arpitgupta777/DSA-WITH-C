#include<stdio.h>
#include<stdlib.h>
 typedef  struct node
{
    int num;
    struct node *next;
} node;

    void printlist(struct node *ptr)
{

    while (ptr != NULL) {
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *insertnode(struct node *head, int num)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node*));
    ptr->num = num;
    ptr->next = head;
    return ptr;
}
struct node *insertatindex(struct node *head, int num,int index)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node*));
    struct node *p= head;
    int i = 0;
    while(i!= index-1)
    {
        p = p->next;
        i++;
        ptr-> next = p->next;
        p->next = ptr;
        ptr->num = num; 
        return head;
    }
}

struct node *insertatend(struct node *head, int num)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node*));
    struct node *p = head;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->num = num;
    ptr->next = NULL;
    return head;
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head-> num=1;
    head->next  = second;

    second-> num=2;
    second->next = third;

    third-> num=3;
    third->next = NULL;

head = insertatend(head, 69); // Insert 0 at the beginning

    printlist(head);

    return 0;
}