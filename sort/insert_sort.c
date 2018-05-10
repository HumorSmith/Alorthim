//
// Created by Eavawu on 29/04/2017.
//
#include "insert_sort.h"

void insert_sort(Element *arr, int len) {
    int i;
    for (i = 1; i < len; ++i) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; --j) {
            if (temp < arr[j]) {
                arr[j + 1] = arr[j]; //比temp大，往后移
            } else {
                break;      //找到比自己小，此时小的索引为j.插入位置为j+1
            }
        }
        arr[j + 1] = temp;
    }
};

void insert_sort_plus(Element *arr, int len) {
    int i;
    for (i = 1; i < len; ++i) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0 && temp < arr[j]; --j) {
            arr[j + 1] = arr[j]; //往后移
        }
        arr[j + 1] = temp;
    }
}