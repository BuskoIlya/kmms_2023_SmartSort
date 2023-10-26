#pragma once

#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>

const int intervals_limit_count = 100;

std::mt19937 mt(time(0));

void init_array(int* arr, const int n);
void print_array(int* arr, const int n);
void shell_sort(
	int* sorting_arr, const int sorting_arr_size,
	int* intervals_arr, const int intervals_arr_size
);
void test(
	const int sorting_arr_size,
	int* intervals_arr,
	const int intervals_arr_size
);

class Timer {
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_beg;
public:
	Timer();
	double elapsed() const;
	void reset();
	void run();
};
