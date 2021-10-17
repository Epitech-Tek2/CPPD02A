/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** pair_comparator
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "map.h"

int pair_comparator(void *first, void *second)
{
    return (*key_cmp_container(false, NULL))
    (((pair_t *)first)->key, ((pair_t *)second)->key);
}