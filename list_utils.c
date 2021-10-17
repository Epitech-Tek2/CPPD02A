/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** list_clear
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_list.h"

void list_clear(list_t *front)
{
    list_t list = *front;
    list_t prev;

    if (list) {
        prev = list;
        list = list->next;
        free(prev);
    }
    *front = NULL;
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    while (list) {
        (*val_disp)(list->value);
        list = list->next;
    }
}

bool list_is_empty(list_t list)
{
    return (!list);
}