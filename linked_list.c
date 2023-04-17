#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
/*
 CH-230-A
 a7_p1.[c]
 Abrham Amanu Eshetu
 aeshetu@jacobs-university.de
 */

struct list * push_front (struct list * my_list,int value )
{
    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }
    newel->info = value;
    newel->ptr = my_list;
    return newel;
}//Adds element in the beginning

struct list *push_back(struct list *my_list, int value)
{
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *)malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }
    newel->info = value;
    newel->ptr = NULL;
    if (my_list == NULL)
        return newel;
        //Adds element in the end
    while (cursor->ptr != NULL)
    {
        cursor = cursor->ptr;
    }
    cursor->ptr = newel;
    return my_list;
}

struct list *remov(struct list *my_list)
{
    if (my_list==NULL)
    {
        return my_list;
    }
    my_list->info=0;
    return my_list->ptr;
}
//removes an element
void print_list (struct list * my_list)
{
    struct list *p;
    for (p = my_list; p!=NULL; p = p->ptr)
    {
        printf("%d ", p->info);
    }
    printf("\n");
 }

void freelist(struct list *my_list)
{
    struct list *nextelem;
    while (my_list != NULL)
    {
        nextelem = my_list->ptr;
        free(my_list);
        my_list = nextelem;
    }
}
