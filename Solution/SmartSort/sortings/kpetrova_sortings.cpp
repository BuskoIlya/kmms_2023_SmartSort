#include "kpetrova_sortings.hpp"

int abs(const int n);
int get_max_abs(const int *const arr, const int n);

void KPetrova::sort_by_count(int *const arr, const int n) {
    int k = get_max_abs(arr, n) + 1;
    int *nums = new int[2 * k + 1]{};
    for (int i = 0; i < n; i++) {
        nums[*(arr + i) + k]++;
    }

    int count = 0;
    for (int i = 0; i < 2 * k + 1; i++) {
        for (int j = 0; j < nums[i]; j++) {
            arr[count] = i - k;
            count++;
        }
    }
}

int abs(const int n) {
    return ((n >= 0) ? n : -n);
}

int get_max_abs(const int *const arr, const int n) {
    int max = abs(*arr);
    for (int i = 1; i < n; i++) {
        if (abs(*(arr + i)) > max) {
            max = abs(*(arr + i));
        }
    }
    return max;
}
