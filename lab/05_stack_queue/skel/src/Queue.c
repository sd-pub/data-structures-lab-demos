#include <stdlib.h>

#include "Queue.h"
#include "utils.h"

queue_t *
q_create(unsigned int data_size, unsigned int max_size)
{
	/* TODO */
	return NULL;
}

unsigned int
q_get_size(queue_t *q)
{
	/* TODO */
	return 0;
}

/*
 * Intoarce 1 daca stiva este goala si 0 in caz contrar.
 */
unsigned int
q_is_empty(queue_t *q)
{
	/* TODO */
	return 0;
}

void *
q_front(queue_t *q)
{
	/* TODO */
	if (!q->size)
		return NULL;

	return NULL;
}

/* Functia intoarce true daca operatia s-a efectuat si false in caz contrar */
bool
q_dequeue(queue_t *q)
{
	/* TODO */
	if (!q->size)
		return false;

	/*
	free(buff[read_idx])
	++read_idx % max_size
	--size;
	https://stackoverflow.com/questions/10623114/operation-on-may-be-undefined
	*/
	return true;
}

/* Functia intoarce true daca operatia s-a efectuat si false in caz contrar */
bool
q_enqueue(queue_t *q, void *new_data)
{
	/* TODO */
	/*
	if (size == max_size)
		return false;

	buff[write_idx] = malloc(data_size)
	memcpy(buff[write_idx], new_data)
	++write_idx % max_size
	*/
	return false;
}

void
q_clear(queue_t *q)
{
	/* TODO */
	// for(i = read_idx; i != write_idx; ++i % max_size)
}

void
q_free(queue_t *q)
{
	/* TODO */
}
