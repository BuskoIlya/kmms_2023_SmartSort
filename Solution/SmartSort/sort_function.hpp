#pragma once

#include "./sortings/include_sort_functions.hpp"

namespace SmartSort {
    struct SortFunction {
        const char* const name;
        const char* const author;
        void (*func)(int arr[], const int arr_size);
    };

    struct SortFunctionArray {
        const SortFunction* const items;
        const int count;
    };
}

namespace SmartSort {
    SortFunctionArray get_15_group_sort_functions();
    SortFunctionArray get_16_group_sort_functions();
    SortFunctionArray get_all_sort_functions();
}

namespace SmartSort {
    const SortFunction IBUSKO_SF_BUBBLE =
        { "Сортировка пузырьком", "Бусько Илья Владимирович", IBusko::sort_by_bubble };
    const SortFunction AKRYLOV_SF_BUBBLE =
        { "Сортировка пузырьком", "Крылов Александр Сергеевич", AKrylov::sort_by_bubble };
    const SortFunction VBEK_SF_BUBBLE =
        { "Сортировка пузырьком", "Бек Вячеслав Александрович", VBek::sort_by_bubble };
}
