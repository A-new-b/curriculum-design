#include "big_category.h"

void init_big_category(big_category &L)
{
	L = (big_category)malloc(sizeof(big_category_node));
	InitList_L(L->small_category);
	if (!L)   exit(1);                        // 存储分配失败
	strcpy_s(L->category_Name, "food");//初始门类设为食品
	L->next_big_category = NULL;                            // 表头结点的指针域置空
}

void add_big_category(big_category &L ,const char a[] )
{
	
	big_category q = (big_category)malloc(sizeof(big_category_node));
	q->next_big_category = NULL;
	InitList_L(q->small_category);
	strcpy_s(q->category_Name, a);
	q->next_big_category = L->next_big_category;
	L->next_big_category = q;
}



