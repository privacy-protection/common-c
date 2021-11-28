#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"
#include "abe_type.h"

#ifndef ABE_UTIL_H
#define ABE_UTIL_H

void transfer_to_struct_element(element_t *t, Element *e);

void transfer_to_element(Element *e, element_t *t);

void load_curve(Element *e_curve, pairing_t *pairing);

void free_Element(Element *x);

element_t **init_invert_list(int n);

void clear_invert_list(element_t **list, int n);

Graph build_tree(int n, int *father);

int get_block_length(Element *e_curve, int data_len);

#endif