#include <clocale>
#include <iostream>

#include "menu.h"

int main() {
    std::setlocale(LC_ALL, "Russian");

    int arr[] = { 8, 2, 5 };
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    Menu::Item isort_by_ibusko_bubble = {
        Menu::ItemType::SORT_BY_IBUSKO_BUBBLE,
        "1 - Отсортировать массив сортировкой Бусько Ильи",
        Menu::sort_by_ibusko_bubble
    };
    
    Menu::Item arr_items[] = {
        isort_by_ibusko_bubble
    };
    
    int menu_input = 0;
    do {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << isort_by_ibusko_bubble.title << std::endl;
        std::cout << "0 - выйти из программы" << std::endl;
        std::cout << "> ";
        std::cin >> menu_input;
    
        if (menu_input != Menu::ItemType::EXIT) {
            arr_items[menu_input - 1].fptr(arr, arr_size);
        }
    } while (menu_input != Menu::ItemType::EXIT);

    return 0;
}
