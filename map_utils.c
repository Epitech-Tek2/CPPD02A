/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** map_get_size
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "map.h"

unsigned int map_get_size(map_t map)
{
    return list_get_size(map);
}

bool map_is_empty(map_t map)
{
    return list_is_empty(map);
}