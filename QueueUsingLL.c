#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

 void enqueue ( struct Node *f , struct Node * r , int val )
 {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL) {
        printf("Queue Overflow\n");
        return;
    }
    else{
    n->data = val;
    n->next = NULL;
    if (r == NULL) {
        f = r = n;
    } else {
        r->next = n;
        r = n;
    }
    }
 }

 int dequeue (struct Node * r,  struct Node  * f){
    int val = -1;
    struct Node * ptr = f;
    if (f == NULL) {
        printf("Queue Underflow\n");
    } else {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
 }
int main (){
struct Node *f = NULL;
struct Node *r = NULL;

enqueue (f , r , 10);
enqueue (f , r , 20);   
enqueue (f , r , 30);
printf("Dequeued element: %d\n",dequeue(r , f));

return 0;
}

