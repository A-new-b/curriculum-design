#pragma once
#include "linklist.h"

//商品类型


typedef struct  big_category_node {
	char category_Name[10];
	struct  big_category_node* next_big_category;
	LinkList small_category;
} * big_category;

void init_big_category(big_category &L);// 新建链表

void add_big_category(big_category &L, const char a[]);// 增加商品种类

big_category find_category_byindex(big_category &L,int index);// 通过indexid寻找指针

LinkList find_LinkList_byindex(big_category L,int index);// 通过indexid寻找指针


void delete_big_category(big_category &L);// 删除商品种类

void category_out_item(LinkList L);// 商品种类出库
