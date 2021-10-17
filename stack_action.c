/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** stack_pop
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

bool stack_pop(stack_t * stack_ptr)
{
    return list_del_elem_at_front(stack_ptr);
}

bool stack_push(stack_t *stack_ptr, void *elem)
{
    return list_add_elem_at_front(stack_ptr, elem);
}

void *stack_top(stack_t stack)
{
    return list_get_elem_at_front(stack);
}