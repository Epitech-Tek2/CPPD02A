/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** double_list_add_elem_at_back
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "double_list.h"

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *node = malloc(sizeof(doublelist_node_t));
    double_list_t list = *front_ptr;

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

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *node = malloc(sizeof(doublelist_node_t));

    node->value = elem;
    node->next = NULL;
    if (!node)
        return (false);
    node->next = *front_ptr;
    *front_ptr = node;
    return (true);
}

static bool process(double_list_t *front_ptr, double elem,
unsigned int position)
{
    double_list_t list = *front_ptr;
    doublelist_node_t *node = malloc(sizeof(doublelist_node_t));

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

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position)
{
    return (position == 0) ? double_list_add_elem_at_front(front_ptr, elem) :
    (!*front_ptr) ? (false) : process(front_ptr, elem, position);
}