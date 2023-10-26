#include "eabrakhin_merge_sorting.hpp"

int main() {
	int arr_size;
	std::cout << "Enter array size: ";
	std::cin >> arr_size;

	int* intervals_arr = new int[arr_size];
	init_intervals_array(intervals_arr, arr_size);

	int intervals_count = 0;
	while (intervals_arr[intervals_count] < intervals_limit_count) {
		intervals_count++;
	}

	test(arr_size, intervals_arr, intervals_count);
}

void init_array(int* arr, const int n) {
	for (int index = 0; index < n; ++index) {
		arr[index] = (mt() % intervals_limit_count);
	}
}

void print_array(int* arr, const int n) {
	for (int index = 0; index < n; ++index) {
		std::cout << " " << arr[index];
	}
	std::cout << std::endl;
}

void shell_sort(
	int* sorting_arr, const int sorting_arr_size,
	int* intervals_arr, const int intervals_arr_size
) {
	for (int k = intervals_arr_size - 1; k >= 0; --k) {
		for (int i = intervals_arr[k]; i < sorting_arr_size; ++i) {
			int temp = sorting_arr[i];
			int j = i;
			for (; j >= intervals_arr[k] && sorting_arr[j - intervals_arr[k]] > temp; j -= intervals_arr[k]) {
				sorting_arr[j] = sorting_arr[j - intervals_arr[k]];
			}
			sorting_arr[j] = temp;
		}
	}
}

void test(
	int sorting_arr_size,
	int* intervals_arr,
	int intervals_arr_size
) {
	int* sorting_arr = new int[sorting_arr_size];
	init_array(sorting_arr, sorting_arr_size);
	print_array(sorting_arr, sorting_arr_size);

	Timer timer{};

	timer.run();
	std::sort(sorting_arr, sorting_arr + sorting_arr_size);
	const double sort_time = timer.elapsed();
	std::cout << "Sort: " << sort_time << std::endl;

	print_array(sorting_arr, sorting_arr_size);
	std::cout << std::endl;

	init_array(sorting_arr, sorting_arr_size);
	print_array(sorting_arr, sorting_arr_size);

	timer.reset();
	shell_sort(sorting_arr, sorting_arr_size, intervals_arr, intervals_arr_size);
	const double shell_sort_time = timer.elapsed();
	std::cout << "Shell sort: " << shell_sort_time << std::endl;

	print_array(sorting_arr, sorting_arr_size);
	std::cout << std::endl;
}

Timer::Timer() {}

void Timer::reset() {
	m_beg = std::chrono::high_resolution_clock::now();
}

double Timer::elapsed() const {
	return
		std::chrono::duration_cast<std::chrono::duration<double, std::ratio<1>>>
		(std::chrono::high_resolution_clock::now() - m_beg).count();
}

void Timer::run() {
	m_beg = std::chrono::high_resolution_clock::now();
}
