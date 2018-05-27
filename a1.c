#include <stdio.h>
#include <stdlib.h>
void SelectionSort(int *A, int n);
int main()
{
	int n;
	scanf("%d", &n);
	int A[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	SelectionSort(A, n);
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
void SelectionSort(int *A, int n)
{
	// Every n-1 pass, the min from unsorted
	// is put in its right place
	int i=0,j=0,min=0;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(A[j] < A[min]){
				min = j;
			}
		}
		// swap A[i] and A[min]
		int temp = A[min];
		A[min] = A[i];
		A[i] = temp;
	}
}