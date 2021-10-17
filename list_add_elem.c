/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** list_add_elem_at_back
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_list.h"

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    node_t *node = malloc(sizeof(node_t));
    list_t list = *front_ptr;

    node->value = elem;
    node->next = NULL;
    if (!node)
        return (false);
    if (!list)
        *front_ptr = node;
    else {
        list = *front_ptr;
        while ((list->next) && (list = list->next));
        list->next = node;
    }
    return (true);
}

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    node_t *node = malloc(sizeof(node_t));

    node->value = elem;
    node->next = NULL;
    if (!node)
        return (false);
    node->next = *front_ptr;
    *front_ptr = node;
    return (true);
}

static bool process(list_t *front_ptr, void *elem,
unsigned int position)
{
    list_t list = *front_ptr;
    node_t *node = malloc(sizeof(node_t));

    while ((--position) && (list = list->next))
        if (!list)
            return (false);
    node->value = elem;
    node->next = NULL;
    if (!node)
        return (false);
    node->next = list->next;
    list->next = node;
    return (true);
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem, unsigned int pos)
{
    return (pos == 0) ? list_add_elem_at_front(front_ptr, elem) :
    (!*front_ptr) ? (false) : process(front_ptr, elem, pos);
}