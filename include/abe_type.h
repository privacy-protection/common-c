/// \file abe_type.h
/// \brief 公共结构体

#include <stdio.h>
#include <stdlib.h>
#include "pbc.h"

#ifndef ABE_TYPE_H
#define ABE_TYPE_H

#define UC unsigned char
#define MAX_ELEMENT_LEN 1024

/// \brief 用于go和c进行数据交换的结构体
struct Element
{
    /// \brief 数据内容
    UC *data;
    /// \brief 数据长度
    int len;
};

typedef struct Element Element;

/// \brief 图中的边结构
struct Edge
{
    int node, next;
};

typedef struct Edge Edge;

/// \brief 用于存储图结构
struct Graph
{
    Edge *e;
    int *h;
};

typedef struct Graph Graph;

#endif