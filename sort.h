#ifndef SORT_H
#define SORT_H


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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


/*Printing Helper*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*swapping function prototype*/
void swap(int *xp, int *yp);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);

/*regular function prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void lomuto_sort(int *array, size_t size, int lo, int hi);
int lomuto_partition(int *array, size_t size, int left, int right);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);


#endif
