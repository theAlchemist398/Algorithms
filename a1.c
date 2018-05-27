#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *A, int n);
int main()
{
	int n;
	scanf("%d", &n);
	int A[n];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	BubbleSort(A, n);
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
void BubbleSort(int *A, int n)
{
	// Every n-1 pass, the largest element from the unsorted part
	// bubbles up to the last index of the unsorted part
	int noSwaps = 1;
	int i=0,j=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(A[j] > A[j+1]){
				noSwaps = 0;
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
		if(noSwaps == 1){
			// All elements are already sorted
			return;
		}
	}
}