// Time: O(nlogn)
// Space: O(n)

void merge(int *A, int* L, int leftC, int *R, int rightC){
	int i=0,j=0,k=0;
	while(i < leftC && j < rightC){
		if(L[i] < R[j]){
			A[k++] = L[i++];
		}else{
			A[k++] = R[j++];
		}
	}
	while(i < leftC) A[k++] = L[i++];
	while(j < rightC) A[k++] = R[j++];
}
void mergeSort(int *A, int n){
	if(n < 2) return;

	int mid = n/2;
	int* L = (int*)malloc(sizeof(int)*mid);
	int* R = (int*)malloc(sizeof(int)*(n-mid));

	for(int i=0;i<mid;i++){ 
		L[i] = A[i];
	}
	for(int i=mid;i<n;i++){
		R[i-mid] = A[i];
	}
	mergeSort(L, mid);
	mergeSort(R, n-mid);
	merge(A, L, mid, R, n-mid);
	free(L);
	free(R);
}
