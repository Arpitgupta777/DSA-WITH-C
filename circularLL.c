#include<stdio.h>
#include<stdlib.h>
 struct node
{
    int num;
    struct node *next;
} node;
    void printlist(struct node *head)
{  
     struct node *ptr = head;
    do{
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }while(ptr!=head);
    
    printf("\n");
}

//insertion at firstt in circular linked list
struct node *insertatfirst(struct node *head, int num){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->num = num;
    struct node *ptr =head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next = p;
    p->next = head;
    head = p;
    return head;
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

    fourth-> num=4;
    fourth->next = head; // Creating a circular link

    head = insertatfirst(head,34);
    printlist(head);
}