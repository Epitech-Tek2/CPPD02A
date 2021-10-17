/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** stack_get_size
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

unsigned int queue_get_size(queue_t queue)
{
    return list_get_size(queue);
}