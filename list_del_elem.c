/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** list_del_elem_at_back
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_list.h"

bool list_del_elem_at_back(list_t *front_ptr)
{
    list_t list = *front_ptr;
    list_t prev = NULL;

    if (!list)
        return (false);
    while ((list->next) && (prev = list) && (list = list->next));
    (prev) ? (prev->next = NULL) : (*front_ptr = NULL);
    return (true);
}

bool list_del_elem_at_front(list_t *front_ptr)
{
    list_t list = *front_ptr;

    if (!list)
        return (false);
    *front_ptr = list->next;
    return (true);
}

static bool process(list_t *front_ptr, unsigned int position)
{
    list_t prev = *front_ptr;
    list_t list = prev->next;

    while ((--position) && (prev = list) && (list = list->next))
        if (!list)
            return (false);
    if (list)
        prev->next = list->next;
    return (true);
}

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    return (position == 0) ? list_del_elem_at_front(front_ptr) :
    (!*front_ptr) ? (false) : process(front_ptr, position);
}