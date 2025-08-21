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
//case 1 : deleting first node
struct node *deletefirst(struct node *head)
{
struct node *ptr = head;
head = head->next;
free(ptr); 
return head; 
}

// case:2 deleting at index
struct node *deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for(int i =0 ; i < index-1;i++){
        p = p->next;
        q = q->next;
    }
    p-> next = q->next;
    free(q);
    return head;
 
}

// case 3: deleting last node
struct node *deletelast(struct node *head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// case 4: deleting by value
struct node *deleteelement(struct node *head,int value)
{
     struct node *p = head;
    struct node *q = head->next;
    while(q->num != value && q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->num == value){
    p->next = q->next;
    free(q);
    return head;
    }
}

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

    head-> num=1;
    head->next  = second;

    second-> num=2;
    second->next = third;

    third-> num=3;
    third->next = fourth;

    fourth-> num=56;
    fourth->next=NULL;

head = deleteelement(head,2);
    printlist(head);
    return 0;
}