#include "common.h"
#include "sort/bubble_sort.h"
#include "sort/insert_sort.h"
#include "sort/shell_sort.h"
#include "sort/quick_sort.h"
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


void test_insert_sort_plus(){
    int len = 6;
    Element arr[6] = {1, 10, 3, 7, 6, 5};
    insert_sort_plus(arr, len);
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
    shell_sort_plus(arr, len);
  //  printArr(arr,len);
};



void test_quick_sort(){
    int len = 8;
    Element arr[8] = {1, 9, 8, 7, 6, 5,10,30};
    printf("origin :");
    printArr(arr,len);
    quick_sort(arr, len);
    printf("dst :");
    printArr(arr,len);
}

void test_median3(){
    int len = 3;
    Element arr[3] = {3,1,2};
    MEDIAN3(arr,0,2);
    printArr(arr,3);


    Element arr1[3] = {3,10,2};
    MEDIAN3(arr1,0,2);
    printArr(arr1,3);

}


int main(void) {
    test_quick_sort();
    return 0;
}
