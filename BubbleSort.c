#include <stdio.h>
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

void BubbleSort(int A[], int n) {
	int last, i, temp;

	for (last = n; last >= 2; last--) {
		for (i = 1; i < last - 1; i++) {
			if (A[i] > A[i + 1])
				SWAP(A[i], A[i + 1], temp);
		}
	}
}

void PrintSort(int A[], int n) {
	int i;

	for (i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}

	puts("");
}

void main() {
	int A[] = { 3, 31, 48, 73, 8, 11, 20, 29, 65, 15 };

	PrintSort(A, 10);

	BubbleSort(A, 10);

	PrintSort(A, 10);
}