#include <stdio.h>
#include <stdlib.h>
void InsertionSort(int *A, int n);
int main()
{
  int n=0;
  scanf("%d", &n);
  int A[n];
  int i=0;
  for(i=0;i<n;i++){
    scanf("%d", &A[i]);
  }
  InsertionSort(A, n);
  for(i=0;i<n;i++){
    printf("%d ", A[i]);
  }
  printf("\n");
  return 0;
}
void InsertionSort(int *A, int n)
{
  int i=0,j=0;
  for(i=1;i<n;i++){
    int temp = A[i];
    j = i-1;
    while((j >= 0) && (A[j] > temp)){
      A[j+1] = A[j];
      j = j-1;
    }
    A[j+1] = temp;
  }
}
