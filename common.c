//
// Created by Eavawu on 29/04/2017.
#include "common.h"

void printArr(Element *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
};


void swap(Element *a, Element *b) {
    Element temp = *a;
    *a = *b;
    *b = temp;
};


