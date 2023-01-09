#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <algorithm>

void fixHeap(int* arr, int i, int size) {
	int left = 2 * i + 1;
	int right = 2 * i + 2;
		if (right < size) {
			if (arr[left] >= arr[right] && arr[left] > arr[i]) {
				std::swap(arr[i], arr[left]);
				fixHeap(arr, left, size);
			}
			else if (arr[right] > arr[left] && arr[right] > arr[i]) {
				std::swap(arr[i], arr[right]);
				fixHeap(arr, right, size);
			}
		}
		else if (left < size) {
			if (arr[left] > arr[i]) {
				std::swap(arr[i], arr[left]);
				fixHeap(arr, left, size);
			}
		}
}

void makeHeap(int* arr, int size) {
	for (int i = size - 1; i >= 0; i--) {
		fixHeap(arr, i, size);
	}
}

void heapsort(int heap_arr[], int size) {
	int _size = size;

	makeHeap(heap_arr, size);

	while (!std::is_sorted(heap_arr, heap_arr + size)) {
		std::swap(heap_arr[0], heap_arr[_size - 1]);

		fixHeap(heap_arr, 0, _size - 1);

		_size--;
	}
}

#endif