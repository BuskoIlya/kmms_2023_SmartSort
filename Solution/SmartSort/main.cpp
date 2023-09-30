#include <iostream>

#include "bubble_sort.hpp"

int main() {
    int arr[] = { 8, 2, 5 };
    const int arr_size = std::size(arr);

    BubbleSort::sort(arr, arr_size);

    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << " ";
    }
}
