#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"

#ifndef ABE_TYPE_H
#define ABE_TYPE_H

#define UC unsigned char
#define MAX_ELEMENT_LEN 1024

// Element 用于go和c进行数据交换的结构体
struct Element
{
    UC *data;
    int len;
};

typedef struct Element Element;

// Edge 图中的边结构
struct Edge
{
    int node, next;
};

typedef struct Edge Edge;

// Graph 用于存储图结构
struct Graph
{
    Edge *e;
    int *h;
};

typedef struct Graph Graph;

#endif