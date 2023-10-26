#include <iostream>
#include "sortings/aarshinov_sorting.hpp"

void heapify(int arr[],const int N, int i);

void heapify(int arr[],const int N, int i)
{

	int largest = i;

	int l = 2 * i + 1;

	int r = 2 * i + 2;

	if (l < N && arr[l] > arr[largest])
		largest = l;


	if (r < N && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		std::swap(arr[i], arr[largest]);

		heapify(arr, N, largest);
	}
}


void AArshinov::heap_sort(int arr[],const int N)
{

	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);


	for (int i = N - 1; i > 0; i--) {

		std::swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}


