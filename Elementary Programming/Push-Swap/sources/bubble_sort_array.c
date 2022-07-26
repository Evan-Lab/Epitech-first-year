/*
** EPITECH PROJECT, 2021
** bubble_sort_array.c
** File description:
** desc
*/

#include "../include/my.h"

void swap_elem(int *array, int index1, int index2)
{
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

void sort_array(int i, int *j, int *array, int size)
{
    while (i + 1 != size ) {
        if (array[i] > array[i + 1]) {
            *j = 1;
            swap_elem(array, i , i + 1);
        }
        i++;
    }

}

int *bubble_sort_array(int *array, int size)
{
    int i = 0;
    int j = 1;

    while (j == 1) {
        j = 0;
        i = 0;
        sort_array(i, &j, array, size);
    }
    return array;
}
