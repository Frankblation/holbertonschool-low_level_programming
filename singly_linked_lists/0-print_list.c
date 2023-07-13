#include "lists.h"

size_t print_list(const list_t *h)
{
    const list_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
         prinf("%s\n"), current->str);
         count++;
         current = current->next;
    }

    return count;
}