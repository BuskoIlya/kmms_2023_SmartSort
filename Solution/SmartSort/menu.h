#pragma once

namespace Menu {
    enum ItemType {
        SORT_BY_IBUSKO_BUBBLE = 1,
        SHOW_SMILE = 2,
        EXIT = 0
    };

    struct Item {
        const ItemType type;
        const char* title;
        void (*fptr)(int arr[], const int arr_size);
    };

    void show_smile();
    void sort_by_ibusko_bubble(int arr[], const int arr_size);
}
