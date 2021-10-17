/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** key_cmp_container
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "map.h"

key_comparator_t key_cmp_container(bool store, key_comparator_t new_key_cmp)
{
    static key_comparator_t comparator = NULL;

    if (store)
        comparator = new_key_cmp;
    return (comparator);
}