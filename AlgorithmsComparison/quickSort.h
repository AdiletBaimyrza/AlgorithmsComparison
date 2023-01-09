#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>

void quicksort(int* arr, int size) {
	if (size > 1) {
		int* l = arr + 1;
		int* r = arr + size - 1;
		int rIndex = size - 1;
		int* pivot = arr;
		int* last = arr + size - 1;

		bool partitioned = false;
		bool stop = false;
		while (!partitioned) {
			if (*l >= *pivot && *r < *pivot) {
				if (stop) {
					std::swap(*r, *pivot);
					partitioned = true;
				}
				else {
					std::swap(*l, *r);
				}
			}
			else if (*l <= *pivot) {
				if (l != last) {
					l++;
				}
				else {
					std::swap(*r, *pivot);
					partitioned = true;
				}
			}
			else {
				if (r != arr) {
					if (r == l) {
						stop = true;
					}
					r--;
					rIndex--;
				}
				else {
					partitioned = true;
				}
			}
		}

		if (r == last) {
			quicksort(arr, size - 1);
		}
		else if (r == arr) {
			quicksort(arr + 1, size - 1);
		}
		else {
			quicksort(r + 1, size - 1 - rIndex);
			quicksort(arr, rIndex);
		}
	}
}

#endif 