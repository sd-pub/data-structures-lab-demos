#include <stdlib.h>

#include "Stack.h"
#include "utils.h"

stack_t *
st_create(unsigned int data_size)
{
	/* TODO */
	return NULL;
}

unsigned int
st_get_size(stack_t *st)
{
	/* TODO */
	return 0;
}

/*
 * Intoarce 1 daca stiva este goala si 0 in caz contrar.
 */
unsigned int
st_is_empty(stack_t *st)
{
	/* TODO */
	return 0;
}

void *
st_peek(stack_t *st)
{
	/* TODO */
    // st->list->head->data
	return NULL;
}

void
st_pop(stack_t *st)
{
	/* TODO */
    // remove_nth(0)
}

void
st_push(stack_t *st, void *new_data)
{
	/* TODO */
    // add_nth(0)
}

void
st_clear(stack_t *st)
{
	/* TODO */
    // scoate nodurile din lista
    // lista ramane alocata
}

void
st_free(stack_t *st)
{
	/* TODO */
    // ll_free + free(stiva)
}
