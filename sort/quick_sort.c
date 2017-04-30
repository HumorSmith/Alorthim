//
// Created by Eavawu on 30/04/2017.
//

#include "quick_sort.h"

//找出storeIndex
int partition(Element *arr, int left, int right) {
    int storeIndex = left;
    int pivot = arr[right]; // 直接选最右边的元素为基准元素
    int i = 0;
    for (i = left; i < right; i++) {
        if (arr[i] < pivot) {
            swap(&arr[storeIndex], &arr[i]);
            storeIndex++; // 交换位置后，storeIndex 自增 1，代表下一个可能要交换的位置
        }
    }
    swap(&arr[storeIndex], &arr[right]);// 将基准元素放置到最后的正确位置上
    return storeIndex;
}


void quick_sort(Element *arr, int left, int right) {
    if (left > right) {
        return;
    }
    int storeIndex = partition(arr, left, right);
    quick_sort(arr, left, storeIndex - 1);
    quick_sort(arr, storeIndex + 1, right);
}
