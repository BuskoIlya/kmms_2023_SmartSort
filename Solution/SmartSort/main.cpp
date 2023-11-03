#include <clocale>
#include <iostream>

#include "menu.hpp"

int main() {
    std::setlocale(LC_ALL, "Russian");

    Menu::Item isort_by_ibusko_bubble = {
        Menu::ItemType::SORT_BY_IBUSKO_BUBBLE,
        "1 - Отсортировать массив сортировкой Бусько Ильи",
        "Бусько Илья >> ",
        Menu::sort_by_ibusko_bubble
    };
    Menu::Item isort_by_akrylov_quick = {
        Menu::ItemType::SORT_BY_AKRYLOV_QUICK,
        "2 - Отсортировать массив сортировкой Александра Крылова",
        "Александр Крылов >> ",
        Menu::sort_by_akrylov_quick
    };
    Menu::Item isort_by_asulimov_bubble = {
        Menu::ItemType::SORT_BY_ASULIMOV_BUBBLE,
        "3 - Отсортировать массив сортировкой Андрея Сулимова",
        "Андрей Сулимов >> ",
        Menu::sort_by_asulimov_bubble
    };

    Menu::Item arr_items[] = {
        isort_by_ibusko_bubble,
        isort_by_akrylov_quick,
        isort_by_asulimov_bubble
    };

    int menu_input = 0;
    do {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << isort_by_ibusko_bubble.title << std::endl;
        std::cout << isort_by_akrylov_quick.title << std::endl;
        std::cout << isort_by_asulimov_bubble.title << std::endl;
        std::cout << "0 - выйти из программы" << std::endl;
        std::cout << "> ";
        std::cin >> menu_input;

        int arr[] = { 8, 2, 5 };
        const int arr_size = sizeof(arr) / sizeof(arr[0]);

        if (menu_input != Menu::ItemType::EXIT) {
            arr_items[menu_input - 1].fptr(arr_items[menu_input - 1].comment, arr, arr_size);
        }
        std::cout << std::endl;
    } while (menu_input != Menu::ItemType::EXIT);

    return 0;
}
