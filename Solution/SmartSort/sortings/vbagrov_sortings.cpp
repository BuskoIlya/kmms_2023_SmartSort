#include "vbagrov_sortings.hpp"

void sort(int a[], const int start, const int q, const int end);
void sort_by_recursive(int a[], const int start, const int end);

void VBagrov::sort_by_merge(int arr[], const int n) {
    sort_by_recursive(arr, 0, n);
}

void sort(int a[], const int start, const int q, const int end) {
    int* first = new int[q - start + 1];
    for (int i = 0; i < q - start; i++) {
        first[i] = a[start + i];
    }

    int* second = new int[end - q + 1];
    for (int i = q; i < end; i++) {
        second[i - q] = a[i];
    }
    int const max_value = 1000000;
    first[q - start] = max_value;
    second[end - q] = max_value;
    int i = 0;
    int j = 0;

    for (int k = 0; k < (end - start); k++) {
        if (first[i] <= second[j]) {
            a[start + k] = first[i];
            i++;
        } else {
            a[start + k] = second[j];
            j++;
        }
    }

    delete[] first;
    delete[] second;
}

void sort_by_recursive(int a[], const int start, const int end) {
    if (start < end) {
        int q = (end + start - 1) / 2 + 1;
        if (q != end) {
            sort_by_recursive(a, start, q);
            sort_by_recursive(a, q, end);
            sort(a, start, q, end);
        }
    }
}
