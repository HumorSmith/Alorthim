//
// Created by Eavawu on 29/04/2017.
//
#include "insert_sort.h"
void insert_sort(Element* arr,int len){
    int i;
    for (i = 1; i <len ; ++i) {
        int temp = arr[i];
        int j=i-1;
        for ( ; j >=0&&arr[j]>temp; --j) {
              arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
};
