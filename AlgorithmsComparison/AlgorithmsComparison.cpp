//#include "heapSort.h"
//#include "quickSort.h"
//#include "insertionSort.h"
//#include "mergeSort.h"
//
//#include <iostream>
//#include <random>
//#include <fstream>
//#include <chrono>
//
//const int bigStep = 100;
//const int smallStep = 1;
//const int maxSize_Big = 5000;
//const int maxSize_Small = 100;
//const int iterations = 100;
//
//int measureTime(int* arr, int size, void algorithm(int*, int)) {
//    int* arr_copy = new int[size];
//    for (int i = 0; i < size; i++) {
//        arr_copy[i] = arr[i];
//    }
//
//    auto start = std::chrono::steady_clock::now();
//    algorithm(arr_copy, size);
//    auto end = std::chrono::steady_clock::now();
//    
//    delete[] arr_copy;
//
//    return std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
//}
//
//int main() {
//    
//    std::ofstream random_Small("random_small.txt");
//
//    for (int len = smallStep; len < maxSize_Small + 1; len++) {
//        long long merge_Small = 0;
//        long long quick_Small = 0;
//        long long insertion_Small = 0;
//        long long heap_Small = 0;
//
//        for (int t = 0; t < iterations; t++) {
//            std::random_device rd2;
//            std::mt19937 gen(rd2());
//            std::uniform_int_distribution<int> dist(-len, len);
//
//            int* arr = new int[len];
//
//            for (int index = 0; index < len; index++) {
//                arr[index] = dist(gen);
//            }
//
//            merge_Small += measureTime(arr, len, &_mergesort);
//            quick_Small += measureTime(arr, len, &quicksort);
//            insertion_Small += measureTime(arr, len, &insertion_sort);
//            heap_Small += measureTime(arr, len, &heapsort);
//
//            delete[] arr;
//        }
//
//        merge_Small /= iterations;
//        quick_Small /= iterations;
//        insertion_Small /= iterations;
//        heap_Small /= iterations;
//
//        random_Small << len << " " << merge_Small << " " << quick_Small << " " << insertion_Small << " " << heap_Small << std::endl;
//    }
//
//    random_Small.close();
//
//    ///////////////////////////////////////
//
//    std::ofstream random("random.txt");
//
//    for (int len = bigStep; len < maxSize_Big + 1; len += bigStep) {
//        long long merge_Random = 0;
//        long long quick_Random = 0;
//        long long insertion_Random = 0;
//        long long heap_Random = 0;
//
//        for (int t = 0; t < iterations; t++) {
//            std::random_device rd;
//            std::mt19937 gen(rd());
//            std::uniform_int_distribution<int> dist(-len, len);
//
//            int* arr = new int[len];
//
//            for (int index = 0; index < len; index++) {
//                arr[index] = dist(gen);
//            }
//
//            merge_Random += measureTime(arr, len, &_mergesort);
//            quick_Random += measureTime(arr, len, &quicksort);
//            insertion_Random += measureTime(arr, len, &insertion_sort);
//            heap_Random += measureTime(arr, len, &heapsort);
//
//            delete[] arr;
//        }
//
//        merge_Random /= iterations;
//        quick_Random /= iterations;
//        insertion_Random /= iterations;
//        heap_Random /= iterations;
//
//        random << len << " " << merge_Random << " " << quick_Random << " " << insertion_Random << " " << heap_Random << std::endl;
//    }
//
//    random.close();
//
//    return 0;
//}

#include <iostream>
#include "insertionSort.h"

int main() {
	int arr[10] = { 1, 5, 2, 3, 1, 0, -10, -10, -500, 1000 };
	insertion_sort(arr, 10);
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
}