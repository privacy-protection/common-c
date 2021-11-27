#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"

#ifndef ABE_TYPE_H
#define ABE_TYPE_H

#define UC unsigned char
#define MAX_ELEMENT_LEN 1024

struct Element
{
    UC *data;
    int len;
};

typedef struct Element Element;

struct Edge
{
    int node, next;
};

typedef struct Edge Edge;

struct Graph
{
    Edge *e;
    int *h;
};

typedef struct Graph Graph;

#endif