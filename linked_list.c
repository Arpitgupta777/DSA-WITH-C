#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
        int num;
        struct node *next;
}node;

int main(int argc,char*argv[])
{
    node *list = NULL;

    for (int i =1; i<argc; i++)
    {
            int num = atoi(argv[i]); 
            printf("%i\n",num);
    }
}
       