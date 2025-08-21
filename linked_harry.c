#include<stdio.h>
#include<stdlib.h>
 struct node
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



    printlist(head);

    return 0;
}