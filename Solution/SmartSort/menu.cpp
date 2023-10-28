#include "menu.h"

#include "ioarray.hpp"
#include "./sortings/ibusko_sortings.hpp"

void Menu::sort_by_ibusko_bubble(int arr[], const int arr_size) {
    IOArray::print_array("Первоначальный массив: ", arr, arr_size);
    IBusko::sort_by_bubble(arr, arr_size);
    IOArray::print_array("Отсортированный массив: ", arr, arr_size);
}
