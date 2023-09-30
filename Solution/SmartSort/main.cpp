#include <iostream>

#include "bubble_sort.hpp"

int main() {
    std::vector<int> arr = { 8, 2, 5 };

    // TODO: sorting
    BubbleSort::sort(arr);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
}
