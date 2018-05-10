//
// Created by Eavawu on 30/04/2017.
//

#include "quick_sort.h"
void quick_sort(Element *arr, int len) {
    quick_sort_inner(arr, 0, len -1);
}

Element MEDIAN3(Element *arr, int left, int right) {
    int centerPos = (left + right) / 2;
    if (arr[left] > arr[centerPos]) {
        swap(&arr[left], &arr[centerPos]);
    }
    if (arr[left] > arr[right]) {
        swap(&arr[left], &arr[right]);
    }

    if (arr[centerPos] > arr[right]) {
        swap(&arr[centerPos], &arr[right]);
    }
    printf("left = %d  center = %d  right = %d \n",arr[left],arr[centerPos],arr[right  ]);
    return arr[ centerPos];
};

void quick_sort_inner(Element *arr, int left, int right) {
    //找准pivot
    if (0 < right - left) {

        int pivot = MEDIAN3(arr,left,right);
        int low = left;
        int high = right ;
        while (1) {

            while (arr[++low] < pivot) {};
            while (arr[--high] > pivot) {};
            if (low < high) {
                printf("swap %d   and %d \n",arr[low],arr[high]);
                swap(&arr[low], &arr[high]);
            } else {
                break;
            }
        }
        quick_sort_inner(arr, left, low-1);    /* 递归解决左边 */
        quick_sort_inner(arr, low, right);   /* 递归解决右边 */
    }
};




