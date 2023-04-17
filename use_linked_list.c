#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
/*
 CH-230-A
 a7_p1.[c]
 Abrham Amanu Eshetu
 aeshetu@jacobs-university.de
 */
int main()
{
char chr;
int a,b;
struct list *linkedlist=NULL;
do
{
    scanf("%c",&chr);
    switch (chr)
    {
    case 'a':
        scanf("%d",&a);
        linkedlist=push_back(linkedlist,a);
        break;
    case 'b':
        scanf("%d",&b);
        linkedlist=push_front(linkedlist,b);
        break;
    case 'r':
        linkedlist=remov(linkedlist);
        break;
    case 'p':
        print_list(linkedlist);
        break;
    case 'q':
        freelist(linkedlist);
    default:
        break;
    }

} while (chr !='q');
return 0;
}

