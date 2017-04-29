//
// Created by Eavawu on 29/04/2017.
#include "common.h"

void printArr(Elment *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
};


void swap(Elment *a, Elment *b) {
    Elment temp = *a;
    *a = *b;
    *b = temp;
};


