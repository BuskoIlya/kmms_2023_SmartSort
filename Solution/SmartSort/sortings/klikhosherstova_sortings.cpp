#include <algorithm>
#include "klikhosherstova_sortings.hpp"

void KLikhosherstova::sort_by_bubble(int arr[], const int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
