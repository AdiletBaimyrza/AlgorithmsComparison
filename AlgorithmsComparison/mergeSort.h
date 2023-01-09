#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>

int* merge(int* arr1, int* arr2, int size1, int size2) {
	int msize = size1 + size2;
	int* merged = new int[msize];

	int x = 0;
	int y = 0;
	for (int i = 0; i < msize; i++) {
		if (x < size1 && y < size2) {
			if (arr1[x] <= arr2[y]) {
				merged[i] = arr1[x];
				x++;
			}
			else {
				merged[i] = arr2[y];
				y++;
			}
		}
		else if (y < size2) {
			merged[i] = arr2[y];
			y++;
		}
		else if (x < size1) {
			merged[i] = arr1[x];
			x++;
		}
	}

	return merged;
}

int* mergesort(int *arr, int size) {
	if (size == 1) {
		int* a = new int[1];
		a[0] = arr[0];
		return a;
	}
	else {
		int lsize = 0;
		int rsize = 0;

		if (size % 2 == 0) {
			lsize = size / 2;
			rsize = size / 2;
		}
		else {
			lsize = (size / 2) + 1;
			rsize = size / 2;
		}

		int* left = new int[lsize];
		int* right = new int[rsize];

		int j = 0;
		for (int i = 0; i < size; i++) {
			if (i < lsize) {
				left[i] = arr[i];
			}
			else {
				right[j] = arr[i];
				j++;
			}
		}

		left = mergesort(left, lsize);
		right = mergesort(right, rsize);

		int* output = merge(left, right, lsize, rsize);

		delete[] left;
		delete[] right;

		return output;
	}
}

void _mergesort(int* arr, int size) {
	int* temp = new int[size];
	temp = mergesort(arr, size);
	delete[] temp;
}

#endif 