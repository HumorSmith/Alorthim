//
// Created by Eavawu on 29/04/2017.
//
#include "shell_sort.h"
//实现方式 1A - 2A   2A - 3A     1B - 2B 2B - 3B
void shell_sort(Element *arr, int len) {
    int i, j, gap;

    for (gap = len / 2; gap > 0; gap /= 2) //步长
        for (i = 0; i < gap; i++)        //循环步长分组
        {
            for (j = i + gap; j < len; j += gap) //步长递进.插入排序
                if (arr[j] < arr[j - gap]) {
                    int temp = arr[j];
                    int k = j - gap;
                    while (k >= 0 && arr[k] > temp) {
                        arr[k + gap] = arr[k];
                        k -= gap;
                    }
                    arr[k + gap] = temp;
                }
        }
};


//for循环
void shell_sort_for(Element *arr, int len) {
    int i, j, gap;

    for (gap = len / 2; gap > 0; gap /= 2) //步长
        for (i = 0; i < gap; i++)        //循环步长的每一个分组
        {
            for (j = i + gap; j < len; j += gap) //步长递进.插入排序.把gap换成1就是插入排序
                if (arr[j] < arr[j - gap]) {
                    int temp = arr[j];
                    int k = j - gap;
                    for (;k >= 0 && arr[k] > temp;k -= gap){ //当前数跟之前组里面的每个数据进行比较
                        arr[k + gap] = arr[k];
                    }
                    arr[k + gap] = temp;
                }
        }
};

//shell排序的另外一种思路.  1A - 2A   1B - 2B  2A-3A  2B-3B
void shell_sort_plus(int arr[], int len)
{
    int j, gap;

    for (gap = len / 2; gap > 0; gap /= 2)
        for (j = gap; j < len; j++)//从数组第gap个元素开始
            if (arr[j] < arr[j - gap])//每个元素与自己组内的数据进行直接插入排序
            {
                int temp = arr[j];
                int k = j - gap;
                while (k >= 0 && arr[k] > temp)
                {
                    arr[k + gap] = arr[k];
                    k -= gap;
                }
                arr[k + gap] = temp;
            }
}


void shell_sort_swap(int arr[], int len)
{
    int i, j, gap;

    for (gap = len / 2; gap > 0; gap /= 2)
        for (i = gap; i < len; i++)
            for (j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap)
                swap(&arr[j], &arr[j + gap]);
}