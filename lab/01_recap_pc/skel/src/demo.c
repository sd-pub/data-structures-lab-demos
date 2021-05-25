#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define NUM_ROWS	100
#define NUM_COLS	50


int main(void)
{
	// m = vector de ptr
	// m[0] -> [ | | | ... | ] <=> prima linie
	// m[1] -> [ | | | ... | ] <=> a doua linie
	// ...
	// m[99] -> [ | | | ... | ] <=> a 100-a linie

	// t *p;
	// p += 2; <=> 2 * sizeof(*p)
	void* p;

	int **m = malloc(NUM_ROWS * sizeof(*m));  // NU sizeof(int*)!
	DIE(NULL == m, "malloc pointers array failed");
	// int *v = malloc(NUM_ROWS * sizeof(*v));

	for (int i = 0; i < NUM_ROWS; ++i) {
		// m[i] == *m == int*
		// *m[i] == **m == int
		m[i] = malloc(NUM_COLS * sizeof(*m[i]));
		// SAU sizeof(**m), NU sizeof(int)!
		DIE(NULL == m[i], "malloc row failed");
	}

	p = malloc(32000000000);
	DIE(NULL == p, "malloc 32GB failed");

	errno = 2;
	DIE(1, "neata!");
	
	return 0;
}

