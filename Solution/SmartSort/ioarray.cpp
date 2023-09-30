#include "ioarray.hpp"

#include <iostream>

void IOArray::print_array(int arr[], const int& n) {
    std::cout << "Result array is:";
    for (int i = 0; i < n; i++) {
        std::cout << " " << arr[i];
    }
}
