#include <stdio.h>
#include <stdlib.h>
void Merge(int *A, int mid, int n);
void MergeSort(int *A, int n);
int main()
{
	int n;
	scanf("%d", &n);
	int A[n];
	int i=0;
	for(int i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	MergeSort(A, n);
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
void MergeSort(int *A, int n){
	if(n <= 1){
		return;
	}
	int mid = n/2;
	MergeSort(A, mid);
	MergeSort(A + mid, n - mid);
	Merge(A, mid, n);
}
void Merge(int *A, int mid, int n)
{
	int B[n];
	for(int i=0;i<n;i++){
		B[i] = 0;
	}
	int i=0,j=mid,k=0;
	while(i < mid && j < n){
		if(A[i] < A[j]){
			B[k] = A[i];
			i++;
		}
		else{
			B[k] = A[j];
			j++;
		}
		k++;
	}
	if(i == mid){
		while(j < n){
			B[k] = A[j];
			k++;
			j++;
		}
	}
	else{
		while(i < mid){
			B[k] = A[i];
			k++;
			i++;
		}
	}
	i = 0;
	for(i=0;i<n;i++){
		A[i] = B[i];
	}
}