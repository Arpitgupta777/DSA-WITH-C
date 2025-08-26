 #include<stdio.h>
 #include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
// printing stack
void printStack(struct stack *ptr){
    for (int i = 0;i<= ptr->top; i++){
    printf("%d  ", ptr->arr[i]);
    }
    printf("\n");
}
int isEmpty (struct stack *ptr){
    if (ptr-> top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull (struct stack *ptr){
    if (ptr->top == ptr->size - 1){
        return 1;
    }else{
        return 0;
    }
}
// push operation
void push (struct stack *ptr , int val)
{
    if (isFull(ptr)){
        printf(" Stack overflow");
    }else{
        ptr-> top++;
        ptr->arr[ptr->top]= val;
    }
}

// pop operation
int pop (struct stack *ptr){
    if (isEmpty(ptr)){
        printf(" Stack underflow");
        return -1;
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

 int main(){
    // struct stack s;
    // s.size =80;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size * sizeof(int*));

     struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int*));
   

//     push(sp,1);
//     push(sp,2);
//     push(sp,3);
//     push(sp,4);
//     push(sp,5);
//   printStack(sp);
//    pop(sp);

   
    printStack(sp);
     return 0;


 }
