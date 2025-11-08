#include<stdio.h>

void PrintArray(int A[], int n ){
    for (int i = 0; i < n ; i++){
        printf("%d " ,A[i]);
    }
}

void BubbleSort (int A[], int n){
int i, j, temp;
for ( i = 0; i < n -1 ; i++)        // for  number of  pass 
{
    for ( j = 0; j < n - 1 - i ; j++)
    {
      if (A[j]>A[j+1])
      {
        temp = A[j];
        A [j] =A[j+1];
        A[j+1] = temp;
      }
        
    }
}

}


int main(){
    int A[] = {12,45,89,63,17,52,3,4};
    int n = sizeof (A)/sizeof(A[0]);
    

PrintArray(A, n);  // Before sorting
BubbleSort(A, n); 
printf("\n"); 
PrintArray(A, n); // After sorting

    return 0;
}