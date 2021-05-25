#include <stdio.h>
#include <stdlib.h>

#include "ListGraph.h"

list_graph_t*
lg_create(int nodes)
{
	/* TODO */
	// neigh[i] = ll_create(sizeof(int))
}

void
lg_add_edge(list_graph_t* graph, int src, int dest)
{
	/* TODO */
	// src -> dest
	// add_nth(graph->neighbours[src], 0, dest)
}

static ll_node_t *find_node(linked_list_t *ll, int node, unsigned int *pos)
{
	// copy-paste modificat de la Hashtable
	return NULL;
}

int
lg_has_edge(list_graph_t* graph, int src, int dest)
{
	/* TODO */
	// folositi find_node
}

linked_list_t*
lg_get_neighbours(list_graph_t* graph, int node)
{
	/* TODO */
}

void
lg_remove_edge(list_graph_t* graph, int src, int dest)
{
	/* TODO */
	// folositi find_node
}

void
lg_free(list_graph_t* graph)
{
	/* TODO */
}