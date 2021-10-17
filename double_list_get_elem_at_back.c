/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** double_list_get_elem_at_back
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "double_list.h"

double double_list_get_elem_at_back(double_list_t list)
{
    if (!list)
        return (0);
    while ((list->next) && (list = list->next));
    return (list->value);
}

double double_list_get_elem_at_front(double_list_t list)
{
    return (!list) ? (0) : (list->value);
}

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    if (!list)
        return (0);
    while ((position--) && (list = list->next))
        if (!list)
            return (0);
    return (list->value);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    while (list) {
        if (list->value == value)
            return list;
        list = list->next;
    }
    return NULL;
}

unsigned int double_list_get_size(double_list_t list)
{
    int i = 0;

    while (list) {
        i++;
        list = list->next;
    }
    return (i);
}