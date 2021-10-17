/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** stack_is_empty
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

bool queue_is_empty(queue_t queue)
{
    return list_is_empty(queue);
}