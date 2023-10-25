#include <clocale>

#include "./sortings/ibusko_sortings.hpp"
#include "ioarray.hpp"

int main() {
    std::setlocale(LC_ALL, "Russian");

    int arr[] = { 8, 2, 5 };
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    IOArray::print_array("Первоначальный массив: ", arr, arr_size);
    IBusko::sort_by_bubble(arr, arr_size);
    IOArray::print_array("Отсортированный массив: ", arr, arr_size);

    return 0;
}
