#include<stdio.h>
#include<stdlib.h>

struct Queue {
    int f ;
    int size;
    int r ;
    int *arr;
};

void enqueue (struct Queue *q , int val){
    if ((q -> r + 1 )% q -> size == q -> f){
        printf ("Queue Overflow \n");
    }
    else
    {
        q -> r = (q -> r +1 )% q -> size;
        q -> arr[q -> r] = val;
    }
}

int dequeue (struct Queue * q ){
    if  ( q -> f ==  q -> r){
        printf ("Queue Inderflow \n");
    }
else {
q -> f = (q-> f +1 ) % q-> size;
return q ->  arr[ q->f];
}    

}


int main(){
    
    struct Queue q;
    q.size = 100;
    q.r = q.f = 0;
    enqueue (&q,10);
    enqueue (&q,20);    
    enqueue (&q,30);
    printf("Dequeued element: %d\n",dequeue(&q));
    return 0;
}