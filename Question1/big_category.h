#pragma once
#include "linklist.h"

//商品类型


typedef struct  big_category_node {
	char category_Name[10];
	struct  big_category_node* next_big_category;
	LinkList small_category;
} * big_category;

void init_big_category( big_category &L);

void add_big_category(big_category &L, const char a[]);