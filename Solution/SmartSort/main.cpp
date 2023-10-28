#include <clocale>

#include "menu.h"

int main() {
    std::setlocale(LC_ALL, "Russian");

    int arr[] = { 8, 2, 5 };
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    Menu::Item isortByIBuskoBubble = {
        Menu::ItemType::SORT_BY_IBUSKO_BUBBLE,
        "1 - Отсортировать массив сортировкой ильи бусько",
        Menu::sort_by_ibusko_bubble
    };
    Menu::Item ishowSmile = {
        Menu::ItemType::SHOW_SMILE,
        "2 - Показать улыбочку",
        Menu::show_smile
    };

    
    menu::item arr_items[] = {
        sorting_by_ibusko_item
    };
    
    int menu_input = 0;
    do {
        std::cout << "выберите действие:" << std::endl;
        std::cout << sorting_by_ibusko_item.title << std::endl;
        std::cout << "0 - выйти из программы" << std::endl;
        std::cout << "> ";
        std::cin >> menu_input;
    
        if (menu_input != 0) {
            arr_items[menu_input - 1].fptr(arr, arr_size);
        }
    
        //switch (menu_input) {
        //    case menu::itemtype::sorting_by_ibusko:
        //        sorting_by_ibusko_item.fptr(arr, arr_size);
        //        break;
        //    default:
        //        break;
        //}
    
    } while (menu_input != 0);

    return 0;
}



//void sort_by_ibusko(int arr[], const int arr_size) {
//    IOArray::print_array("Первоначальный массив: ", arr, arr_size);
//    IBusko::sort_by_bubble(arr, arr_size);
//    IOArray::print_array("Отсортированный массив: ", arr, arr_size);
//}








//void sort_by_ibusko(int arr[], const int arr_size);
//
//int main() {
//    std::setlocale(LC_ALL, "Russian");
//
//    int arr[] = { 8, 2, 5 };
//    const int arr_size = sizeof(arr) / sizeof(arr[0]);
//
//    Menu::Item sorting_by_ibusko_item = {
//        Menu::ItemType::sorting_by_ibusko,
//        "1 - Отсортировать массив сортировкой Ильи Бусько",
//        sort_by_ibusko
//    };
//
//    Menu::Item arr_items[] = {
//        sorting_by_ibusko_item
//    };
//
//    int menu_input = 0;
//    do {
//        std::cout << "Выберите действие:" << std::endl;
//        std::cout << sorting_by_ibusko_item.title << std::endl;
//        std::cout << "0 - Выйти из программы" << std::endl;
//        std::cout << "> ";
//        std::cin >> menu_input;
//
//        if (menu_input != 0) {
//            arr_items[menu_input - 1].fptr(arr, arr_size);
//        }
//
//        //switch (menu_input) {
//        //    case Menu::ItemType::sorting_by_ibusko:
//        //        sorting_by_ibusko_item.fptr(arr, arr_size);
//        //        break;
//        //    default:
//        //        break;
//        //}
//
//    } while (menu_input != 0);
//
//    return 0;
//}
//

