#include "big_category.h"
#include <string.h>

void init_big_category(big_category &L)
{
	L = (big_category)malloc(sizeof(big_category_node));
	InitList_L(L->small_category);
	if (!L)   exit(1);                        // 存储分配失败
    strcpy(L->category_Name, "food");//初始门类设为食品
    L->next_big_category = NULL;                            // 表头结点的指针域置空
}

void add_big_category(big_category &L ,const char a[] )
{
	
	big_category q = (big_category)malloc(sizeof(big_category_node));
	q->next_big_category = NULL;
	InitList_L(q->small_category);
//    q ->small_category =nullptr;
    strcpy(q->category_Name, a);
	q->next_big_category = L->next_big_category;
	L->next_big_category = q;
}

big_category find_category_byindex(big_category &L,int index){
    for(int i=0;i<index;i++){
        L=L->next_big_category;
    }
    return L;
}
LinkList find_LinkList_byindex(big_category L,int index){
    LinkList p = L->small_category;
    for(int i=0;i<index;i++){
        p=p->next;
    }
    return p;
}


