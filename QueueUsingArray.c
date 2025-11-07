#include<stdio.h>
#include<stdlib.h>

struct Queue
 {
    int f;
    int r;
    int size;
    int *arr;

};

int isEmpty(struct  Queue*q){
        if ( q-> r == q->f){
            return 1;
        }
        return 0;
}



int isFull(struct  Queue*q){
        if ( q-> r == q-> size - 1){
            return 1;
        }
        return 0;
}

void enqueue (struct Queue * q , int val){
    if (isFull(q)){
        printf("Queue Overflow \n");
    }
    else
    q-> r++;
    q -> arr[q-> r] = val;
}

int dequeue(struct Queue * q){
    if (isEmpty(q)){
        printf("Queue Underflow \n");
    }
    else {
        q -> f++;
        return q -> arr[q-> f];
    }
}


int main()
{
struct Queue q;
q.size= 100;
q.f = q.r = -1;
q.arr = (int *)malloc(q.size * sizeof(int));

enqueue (&q,10);
enqueue (&q,20);
enqueue (&q,30);
printf("Dequeued element: %d\n",dequeue(&q));

return 0;
}