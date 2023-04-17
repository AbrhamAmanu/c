#include <stdio.h>
#include <stdlib.h>
/*
 CH-230-A
 a7_p1.[c]
 Abrham Amanu Eshetu
 aeshetu@jacobs-university.de
 */
 struct list
{
    int info;
    struct list *ptr;
};

struct list * push_front (struct list * my_list,int value);
struct list *push_back(struct list *my_list, int value);
struct list *remov(struct list *my_list);
void print_list (struct list * my_list);
void freelist(struct list *my_list);
/*Separating the function and
struct declarations in one file*/
