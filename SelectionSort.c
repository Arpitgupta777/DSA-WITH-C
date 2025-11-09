#include<stdio.h>

void PrintArray(int A[], int n )
{
    for (int i = 0; i < n ; i++)
    {
        printf("%d " ,A[i]);
    }
    printf("\n");
}

void SelectionSort(int A[], int n){
int min , temp;
    for ( int i = 0; i < n - 1; i++){
        min  = i;
        for (  int j = i + 1 ; j < n ; j++){
            if (A[j] < A[min]){
                min = j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main (){

    int A[] = {45,26,35,4,2,8,99,63,47};
    int n = sizeof (A)/sizeof(A[0]);
    PrintArray(A, n);  // Before sorting
    SelectionSort(A, n);
    PrintArray(A, n); // After sorting
    return 0;
}