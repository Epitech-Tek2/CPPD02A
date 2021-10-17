/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** map_all
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "generic_list.h"
#include "map.h"

bool map_add_elem(map_t *map_ptr, void *key, void *value,
key_comparator_t key_cmp )
{
    pair_t *pair = NULL;
    map_t tmp;
    node_t *node = NULL;
    int i = 0;

    key_cmp_container(true, key_cmp);
    pair = malloc(sizeof(pair_t));
    pair->key = key;
    pair->value = value;
    node = list_get_first_node_with_value(*map_ptr, pair, &pair_comparator);
    if (node) {
        free(node->value);
        node->value = pair;
        return true;
    }
    tmp = *map_ptr;
    while ((tmp && pair_comparator(tmp->value, pair) < 0)) {
        i++;
        tmp = tmp->next;
    }
    return list_add_elem_at_position(map_ptr, pair, i);
}

bool map_del_elem(map_t *map_ptr, void *key, key_comparator_t key_cmp)
{
    map_t map = *map_ptr;
    int i = 0;

    while (map) {
        if (!(*key_cmp)(key, ((pair_t *)map->value)->key)) {
            list_del_elem_at_position(map_ptr, i);
            return (true);
        }
        map = map->next;
        i++;
    }
    return (false);
}

void *map_get_elem(map_t map, void *key, key_comparator_t key_cmp)
{
    pair_t *pair = NULL;
    node_t *node = NULL;

    key_cmp_container(true, key_cmp);
    pair = malloc(sizeof(pair_t));
    pair->key = key;
    node = list_get_first_node_with_value(map, pair, &pair_comparator);
    free(pair);
    return (node) ? ((pair_t *)node->value)->value : NULL;
}