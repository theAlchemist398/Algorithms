#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int *A, int n, int key);
int BinarySearchRecursive(int *A, int low, int high, int key);
int main()
{
	int t = 0;
	scanf("%d", &t);
	while(t--){
		//printf("%d \n", t);
		int n;
		scanf("%d", &n);
		int A[n];
		int i = 0;
		for(i=0;i<n;i++){
			scanf("%d", &A[i]);
		}
		int key = 0;
		scanf("%d", &key);
		// Remember array must be sorted
		int res = BinarySearch(A, n, key);
		int res2 = BinarySearchRecursive(A, 0, n-1, key);
		printf("%d %d\n", res, res2);
	}
	return 0;
}
int BinarySearch(int *A, int n, int key){
	int start = 0;
	int end = n-1;
	while(start <= end){
		int mid = (start+end)/2;
		if(A[mid] == key){
			return mid;
		}
		else if(key > A[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return -1;
}
int BinarySearchRecursive(int *A, int low, int high, int key){
	if(low == high){
		if(A[low] == key){
			return low; 
		}
		return -1;
	}
	int mid = (low + high)/ 2;
	if(A[mid] == key){
		return mid;
	}
	else if(key > A[mid]){
		return BinarySearchRecursive(A, mid+1, high, key);
	}
	else{
		return BinarySearchRecursive(A, 0, mid-1, key);
	}
}