#include "ioarray.hpp"

#include <iostream>

static char SPACE = ' ';

void IOArray::print_array(const char* const comment, const int* const arr, const int n) {
    std::cout << comment;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << SPACE;
    }
    std::cout << std::endl;
}
