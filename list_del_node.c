/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** list_del_node
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_list.h"

bool list_del_node(list_t *front_ptr, node_t *node_ptr)
{
    list_t list = *front_ptr;
    int i = 0;

    if (!list)
        return (false);
    while ((list) && (i++))
        if (node_ptr == list)
            return list_del_elem_at_position(front_ptr, i);
    return (true);
}