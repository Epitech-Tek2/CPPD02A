/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02A-clement.muth
** File description:
** double_list_dump
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "double_list.h"

void double_list_dump(double_list_t list)
{
    for (int i = 0; list; i++) {
        printf("%f\n", list->value);
        list = list->next;
    }
}