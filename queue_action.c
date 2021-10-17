/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** stack_pop
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

bool queue_pop(queue_t *queue_ptr)
{
    return list_del_elem_at_front(queue_ptr);
}

bool queue_push(queue_t *queue_ptr, void *elem)
{
    return list_add_elem_at_back(queue_ptr, elem);
}

void *queue_front(queue_t queue)
{
    return list_get_elem_at_front(queue);
}