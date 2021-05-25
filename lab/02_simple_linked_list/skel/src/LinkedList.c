#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList.h"
#include "utils.h"

linked_list_t*
ll_create(unsigned int data_size)
{
    /* TODO */
}

/**
 * @brief Create a node object. Alloc memory for the struct and data_size bytes
 * for the data itself. DO NOT FORGET ABOUT DIE!
 *
 * @param new_data      pointer to the data to be copied into the node
 * @param data_size     the number of bytes to be copied
 * @return ll_node_t*   the newly created node
 */
static ll_node_t *create_node(const void* new_data, unsigned int data_size)
{
    ll_node_t *node;
    /*
    node = malloc();
    DIE(...)!

    node->data = malloc()

    memcpy(node->data, new_data, data_size)
    */
}

/**
 * @brief Get the nth node from the list. If n is larger than list->size - 1,
 * clamp it down to list->size - 1.
 * 
 * @param n             the position to return
 * @param list          the list
 * @return ll_node_t*   the nth node from the list
 */
static ll_node_t *get_nth_node(unsigned int n, linked_list_t *list)
{
    ll_node_t *node = list->head;

    // n = min(...)

    /*
    Avansam node cu o pozitie in lista: node = node->next

    for (i = 0; i < n; ++i)
        node = node->next
    */

   return node;
}

/*
 * Pe baza datelor trimise prin pointerul new_data, se creeaza un nou nod care e
 * adaugat pe pozitia n a listei reprezentata de pointerul list. Pozitiile din
 * lista sunt indexate incepand cu 0 (i.e. primul nod din lista se afla pe
 * pozitia n=0). Daca n >= nr_noduri, noul nod se adauga la finalul listei. Daca
 * n < 0, eroare.
 */
void
ll_add_nth_node(linked_list_t* list, unsigned int n, const void* new_data)
{
    /* TODO */
    if (!list)
        return
    /*
    new_node = create_node(...)
    
    if (!n) -> O(1)
        new_node->next = head
        head = new_node
    else -> O(n)
        prev_node = get_nth(n - 1)
        legati new_node intre prev_node si prev_node->next (aka current)

    ++size;
    */
}

/*
 * Elimina nodul de pe pozitia n din lista al carei pointer este trimis ca
 * parametru. Pozitiile din lista se indexeaza de la 0 (i.e. primul nod din
 * lista se afla pe pozitia n=0). Daca n >= nr_noduri - 1, se elimina nodul de
 * la finalul listei. Daca n < 0, eroare. Functia intoarce un pointer spre acest
 * nod proaspat eliminat din lista. Este responsabilitatea apelantului sa
 * elibereze memoria acestui nod.
 */
ll_node_t*
ll_remove_nth_node(linked_list_t* list, unsigned int n)
{
    /* TODO */
    ll_node_t *prev, *removed;
    
    if (!list || !list->size)
        return

    /*    
    if (!n) -> O(1)
        removed = head;
        list->head = list->head->next
    else -> O(n)
        prev_node = get_nth(n - 1)
        removed = prev->next
        prev->next = prev->next->next

    --size;
    */

   return removed;
}

/*
 * Functia intoarce numarul de noduri din lista al carei pointer este trimis ca
 * parametru.
 */
unsigned int
ll_get_size(linked_list_t* list)
{
    /* TODO */
}

/*
 * Procedura elibereaza memoria folosita de toate nodurile din lista, iar la
 * sfarsit, elibereaza memoria folosita de structura lista si actualizeaza la
 * NULL valoarea pointerului la care pointeaza argumentul (argumentul este un
 * pointer la un pointer).
 */
void
ll_free(linked_list_t** pp_list)
{
    /* TODO */
    if (!pp_list || !*pp_list)
        return;

    /*
    while((*pp_list)->size)
        node = remove(*pp_list, 0);
        free(data + node)
    
    free(*pp_list)
    *pp_list = NULL;
    */
}

/*
 * Atentie! Aceasta functie poate fi apelata doar pe liste ale caror noduri STIM
 * ca stocheaza int-uri. Functia afiseaza toate valorile int stocate in nodurile
 * din lista inlantuita separate printr-un spatiu.
 */
void
ll_print_int(linked_list_t* list)
{
    /* TODO */
    ll_node_t *node;
    // int(data): *(int *)node->data

    printf("\n");
}

/*
 * Atentie! Aceasta functie poate fi apelata doar pe liste ale caror noduri STIM
 * ca stocheaza string-uri. Functia afiseaza toate string-urile stocate in
 * nodurile din lista inlantuita, separate printr-un spatiu.
 */
void
ll_print_string(linked_list_t* list)
{
    /* TODO */

    printf("\n");
}
