/// \file abe_map.h
/// \brief map相关函数

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef ABE_MAP_H
#define ABE_MAP_H

/// \brief 用于哈希函数计算
#define MOD 10007
/// \brief map初始容量
#define INIT_SIZE 8

/// \brief map中存储的元素，key和value均为int类型
struct MapElement
{
    int key, value;
};

typedef struct MapElement MapElement;

/// \brief map结构
/// \details 用MOD个链表存储元素
struct Map
{
    /// \brief 链表的当前容量
    int size[MOD];
    /// \brief 链表的当前使用长度
    int index[MOD];
    /// \brief 链表中存储的元素
    MapElement *data[MOD];
};

typedef struct Map Map;

/// \brief map初始化
void map_init(Map *m);

/// \brief 清空map所有元素
void map_clear(Map *m);

/// \brief map列表扩展
/// \param m map对象
/// \param hash 待扩展的列表的哈希值
void map_put(Map *m, int key, int value);

/// \brief 将(key, value)存储到map中
bool map_get(Map *m, int key, int *value);

#endif