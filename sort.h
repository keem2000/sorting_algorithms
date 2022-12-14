#ifndef SORT_H
#define SORT_H
#include <stdio.h>
/* ---STRUCTURES--- */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
/* ---PROTOTYPES--- */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t *a, listint_t *b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *array, int first, int second, size_t size);
int partition(int *array, int start, int end, size_t size);
void recursion_sort(int *array, int start, int end, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes_cocktail(listint_t **list, listint_t *node);
#endif
