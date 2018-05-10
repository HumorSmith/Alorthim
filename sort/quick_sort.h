//
// Created by Eavawu on 30/04/2017.
//

#ifndef ALORTHIM_QUICK_SORT_H
#define ALORTHIM_QUICK_SORT_H

#include "../common.h"
void quick_sort(Element * arr,int len);
void quick_sort_inner(Element *arr, int left, int right);
Element MEDIAN3(Element *arr,int left,int right);
#endif //ALORTHIM_QUICK_SORT_H
