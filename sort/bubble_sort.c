//
// Created by Eavawu on 29/04/2017.
//
#include "bubble_sort.h"


void bubble_sort(Element *arr, int len) {
    if (arr == NULL || len == 0) {
        return;
    }
    int i = 0;
    for (i = 0; i < len; ++i) {
        for (int j = 0; j < len-1 - i; ++j) { //len-1 - i    来源 len-1数组最后一个下标.i是已经排序的个数
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
            printf("i=%d,j=%d\t", i, j);
            printArr(arr, len);
            printf("\n");
        }

    }
};

void bubble_sort_plus(Element *arr, int len) {
    if (arr == NULL || len == 0) {
        return;
    }
    int i = 0;
    int hasSwap = 1; //默认有交换
    for (i = 0; i < len; ++i) {
        hasSwap = 0; //设定没有交换
        for (int j = 0; j < len -1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                hasSwap = 1; //有交换
            }
            printf("i=%d,j=%d\t", i, j);
            printArr(arr, len);
            printf("\n");
        }
        if (!hasSwap) { //如果没有交换.退出
            break;
        }

    }
};


