
#include <stdlib.h>
/*
    Singly Linked List Implementation
    By Serhat COŞKUN
*/

typedef struct single_node
{
    struct single_node *next;
    void *ref; // Pointer to data location
    unsigned id;

} single_node;

typedef struct single_list
{
    struct single_node *head;
    struct single_node *tail;
    unsigned len;   // Lenght of list
    unsigned *size; // Size of data

} single_list;

// Getters for the list and node
// List getters
unsigned len(single_list *lst)
{
    return lst->len;
}

// List interface
void append(single_list *lst, void *ref);
void append_to(single_list *lst, void *ref, unsigned idx);
void remove(single_list *lst, unsigned idx);
void get(single_list *lst, unsigned idx);
void set(single_list *lst, unsigned idx);
void *pop(single_list *lst);
short isEmpty(single_list *lst);
void prepend(single_list *lst, void *ref);

single_list *list_constructor(int cap)
{
}

void append(single_list *lst, void *ref)
{
}
void append_to(single_list *lst, void *ref, unsigned idx)
{
}

void prepend(single_list *lst, void *ref)
{
}
void remove(single_list *lst, unsigned idx)
{
}
void get(single_list *lst, unsigned idx)
{
}
void set(single_list *lst, unsigned idx)
{
}
void *pop(single_list *lst)
{
}
short isEmpty(single_list *lst)
{
}

short isLast(single_node *node)
{
    return node->next == NULL;
}