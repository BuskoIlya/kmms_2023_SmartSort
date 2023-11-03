#include "menu.hpp"

#include <iostream>

#include "ioarray.hpp"
#include "./sortings/akrylov_sortings.hpp"
#include "./sortings/asulimov_sortings.hpp"
#include "./sortings/ibusko_sortings.hpp"

void Menu::sort_by_akrylov_bubble(const char* const comment, int arr[], const int arr_size) {
    std::cout << comment << std::endl;
    IOArray::print_array("Первоначальный массив: ", arr, arr_size);
    AKrylov::sort_by_bubble(arr, arr_size);
    IOArray::print_array("Отсортированный массив: ", arr, arr_size);
}

void Menu::sort_by_asulimov_bubble(const char* const comment, int arr[], const int arr_size) {
    std::cout << comment << std::endl;
    IOArray::print_array("Первоначальный массив: ", arr, arr_size);
    ASulimov::sort_by_bubble(arr, arr_size);
    IOArray::print_array("Отсортированный массив: ", arr, arr_size);
}

void Menu::sort_by_ibusko_bubble(const char* const comment, int arr[], const int arr_size) {
    std::cout << comment << std::endl;
    IOArray::print_array("Первоначальный массив: ", arr, arr_size);
    IBusko::sort_by_bubble(arr, arr_size);
    IOArray::print_array("Отсортированный массив: ", arr, arr_size);
}
