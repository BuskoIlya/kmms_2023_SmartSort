#include "sort_function.hpp"

SmartSort::SortFunctionArray SmartSort::get_15_group_sort_functions() {
    const int count = 1;
    SortFunction* items = new SortFunction[count] {
        VBEK_SF_BUBBLE
    };

    return { items, count };
}

SmartSort::SortFunctionArray SmartSort::get_16_group_sort_functions() {
    const int count = 1;
    SortFunction* items = new SortFunction[count] {
        AKRYLOV_SF_BUBBLE
    };

    return { items, count };
}

SmartSort::SortFunctionArray SmartSort::get_all_sort_functions() {
    const int count = 3;
    SortFunction* items = new SortFunction[count] {
        AKRYLOV_SF_BUBBLE,
        IBUSKO_SF_BUBBLE,
        VBEK_SF_BUBBLE
    };

    return { items, count };
}
