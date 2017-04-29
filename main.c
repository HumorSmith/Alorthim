#include "common.h"
#include "sort/bubble_sort.h"

void test_bubble() {
    int len = 6;
    Elment arr[6] = {1, 2, 3, 7, 6, 5};
    bubble_sort(arr, len);
    printArr(arr,len);
}



void test_bubble_plus() {
    int len = 6;
    Elment arr[6] = {1, 2, 3, 7, 6, 5};
    bubble_sort_plus(arr, len);
    printArr(arr,len);
}

int main(void) {
    test_bubble();
    return 0;
}