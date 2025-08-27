#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
    void printlist(struct node *ptr)
{

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

}
int  isEmpty(struct node *top){
    if (top == NULL){
       return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node *top){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if(p == NULL){
        return 1;
        }
        else{
            return 0;
    }
}

struct node *push (struct node *top , int x){
    if(isFull(top)){
        printf("stack overflow\n");
    }
    else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n-> data = x;
        n->next = top;
        top = n;
        return top;    

    }
}

int pop(struct node *tp){
    if(isEmpty(tp)){
        printf("stack underflow\n");
    }
    else{
        struct node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek (struct node *tp, int pos){
    struct node *ptr = tp;
    for(int i = 0; (i<pos-1 && ptr!=NULL); i++){
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int stackTop(struct node *tp){
    return tp->data;
}
int stackBottom(struct node *tp){
    struct node *ptr = tp;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    return ptr->data;
}
int main(){

top =  push(top, 2);
top =  push(top, 4);
top =  push(top, 6);
top =  push(top, 8);
top =  push(top, 10);
top =  push(top, 12);

printlist(top);



return 0;
}