#pragma once

namespace Menu {
    enum ItemType {
        SORT_BY_IBUSKO_BUBBLE = 1,
        SORT_BY_AKRYLOV_QUICK = 2,
        SORT_BY_ASULIMOV_BUBBLE = 3,
        EXIT = 0
    };

    struct Item {
        const ItemType type;
        const char* title;
        const char* comment;
        void (*fptr)(const char* const comment, int arr[], const int arr_size);
    };

    void sort_by_akrylov_quick(const char* const comment, int arr[], const int arr_size);
    void sort_by_asulimov_bubble(const char* const comment, int arr[], const int arr_size);
    void sort_by_ibusko_bubble(const char* const comment, int arr[], const int arr_size);
}
