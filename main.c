#include "common.h"
#include "sort/bubble_sort.h"
#include "sort/insert_sort.h"
#include "sort/shell_sort.h"
void test_bubble() {
    int len = 6;
    Element arr[6] = {1, 2, 3, 7, 6, 5};
    bubble_sort(arr, len);
    printArr(arr,len);
}



void test_bubble_plus() {
    int len = 6;
    Element arr[6] = {1, 2, 3, 7, 6, 5};
    bubble_sort_plus(arr, len);
    printArr(arr,len);
}


void test_insert_sort(){
    int len = 6;
    Element arr[6] = {1, 2, 3, 7, 6, 5};
    insert_sort(arr, len);
    printArr(arr,len);
}


void test_shell_sort(){
    int len = 6;
    Element arr[6] = {1, 2, 3, 7, 6, 5};
    shell_sort(arr, len);
    printArr(arr,len);
};


void test_shell_sort_plus(){
    int len = 6;
    Element arr[6] = {1, 2, 3, 7, 6, 5};
    shell_sort(arr, len);
    printArr(arr,len);
};



int main(void) {
    test_shell_sort_plus();
    return 0;
}
