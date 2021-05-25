/**
 * SD, 2021
 * 
 * Lab #9, BST & Heap
 * 
 * Task #1 - Binary Search Tree implementation
 */

#include "bst.h"
#include "utils.h"

/**
 * Helper function to create a node
 * @data: the data to be added in the node
 * @data_size: data's size
 */
static bst_node_t *__bst_node_create(void *data, size_t data_size)
{
    bst_node_t *bst_node;  

    bst_node = malloc(sizeof(*bst_node));

    DIE(bst_node == NULL, "bst_node malloc");

    bst_node->left = bst_node->right = NULL;

    bst_node->data = malloc(data_size);
    DIE(bst_node->data == NULL, "bst_node->data malloc");
    memcpy(bst_node->data, data, data_size);

    return bst_node;
}

bst_tree_t *bst_tree_create(size_t data_size,
                            int (*cmp_f)(const void *, const void *))
{
    bst_tree_t *bst_tree;

    bst_tree = malloc(sizeof(*bst_tree));
    DIE(bst_tree == NULL, "bst_tree malloc");

    bst_tree->root  = NULL;
    bst_tree->data_size = data_size;
    bst_tree->cmp   = cmp_f;

    return bst_tree;
}

void bst_tree_insert(bst_tree_t *bst_tree, void *data)
{
    int rc;
    bst_node_t *root    = bst_tree->root;
    bst_node_t *parent  = NULL;
    bst_node_t *node    = __bst_node_create(data, bst_tree->data_size);

    /* TODO */
    // rc = bst_tree->cmp(root->data, data); <=> rood->data - data
    // cmp intoarce:
    //      0 root->data == data
    //      < 0 root->data < data
    //      > 0 root->data > data
}

/**
 * Helper function to remove an element from a BST
 * @bst_node: the binary search subtree's root where to remove the element from
 * @data: the data that is contained by the node which has to be removed
 * @data_size: data size
 * @cmp: function used to compare the data contained by two nodes
 */
static bst_node_t *__bst_tree_remove(bst_node_t *bst_node,
                                    void *data, size_t data_size,
                                    int (*cmp)(const void *, const void *))
{
    int rc;
    bst_node_t *tmp;

    if (!bst_node)
        return NULL;

    rc = cmp(data, bst_node->data);

    if (rc < 0) {
        /* TODO */
        // data < node->data
        // node->left = remove(left)
    } else if (rc > 0) {
        /* TODO */
        // analog ca mai sus
    } else {
        /* TODO */
        // am gasit nodul pe care-l scoatem
    
        /*
        0. Nod frunza => nu facem nimic special
        if (frunza)
            free(...)
            return NULL;

        1. Gasim nodul cu care il inlocuim: max(stanga) vs min(dreapta)
        max_left vs min_right

        rc_left = cmp(bst_node->data, max_left->data) <=> bst_node->data - max_left->data
        rc_right = cmp(min_right->data, bst_node->data) <=> min_right->data - bst_node->data

        2. Inocuim bst_node cu max_left sau min_right in functie de rc_left > / < rc_right
        */
    }

    return bst_node;
}

void bst_tree_remove(bst_tree_t *bst_tree, void *data)
{
    bst_tree->root = __bst_tree_remove(bst_tree->root, data,
                                       bst_tree->data_size, bst_tree->cmp);
}

/**
 * Free the left and the right subtree of a node, its data and itself
 * @b_node: the node which has to free its children and itself
 * @free_data: function used to free the data contained by a node
 */
static void __bst_tree_free(bst_node_t *bst_node, void (*free_data)(void *))
{
    if (!bst_node)
        return;

    /* TODO */
}

void bst_tree_free(bst_tree_t *bst_tree, void (*free_data)(void *))
{
    __bst_tree_free(bst_tree->root, free_data);
    free(bst_tree);
}

static void
__bst_tree_print_inorder(bst_node_t* bst_node, void (*print_data)(void*))
{
	if (!bst_node)
		return;
        
    __bst_tree_print_inorder(bst_node->left, print_data);
    print_data(bst_node->data);
    __bst_tree_print_inorder(bst_node->right, print_data);
}

void
bst_tree_print_inorder(bst_tree_t* bst_tree, void (*print_data)(void*))
{
	__bst_tree_print_inorder(bst_tree->root, print_data);
}
