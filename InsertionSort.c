#include<stdio.h>
void PrintArray(int A[], int n )
{
    for (int i = 0; i < n ; i++)
    {
        printf("%d " ,A[i]);
    }
    printf("\n");
}

 void InsertionSort (int A[], int n)
{
 int key , j;
    for (int i = 1; i < n ; i++)
    {
        key = A[i];
        j = i -1;
             while ( A[j] > key){
                    A[j + 1] = A[j];
                    j--;                    
             }
        A[j + 1] = key; 
    }
}

int main (){
    int A[] = {45,26,35,4,2,8,99,63,47};
    int n = sizeof (A)/sizeof(A[0]);
    PrintArray(A, n);  // Before sorting
    InsertionSort(A, n);
    printf("\n");
    PrintArray(A, n); // After sorting

    return 0;
}