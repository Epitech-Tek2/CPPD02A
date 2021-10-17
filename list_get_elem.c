/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** list_get_elem_at_back
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_list.h"

void *list_get_elem_at_back(list_t list)
{
    if (!list)
        return (0);
    while ((list->next) && (list = list->next));
    return (list->value);
}

void * list_get_elem_at_front(list_t list)
{
    return (!list) ? (0) : (list->value);
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    if (!list)
        return (0);
    while ((position--) && (list = list->next))
        if (!list)
            return (0);
    return (list->value);
}

node_t *list_get_first_node_with_value(list_t list, void *value,
value_comparator_t val_comp)
{
    while (list) {
        if (!(*val_comp)(list->value, value))
            return (list);
        list = list->next;
    }
    return (NULL);
}

unsigned int list_get_size(list_t list)
{
    unsigned int i = 0;

    while (list) {
        list = list->next;
        i++;
    }
    return (i);
}