#include "big_category.h"

void init_big_category(big_category &L)
{
	L = (big_category)malloc(sizeof(big_category_node));
	InitList_L(L->small_category);
	if (!L)   exit(1);                        // �洢����ʧ��
	strcpy_s(L->category_Name, "food");//��ʼ������ΪʳƷ
	L->next_big_category = NULL;                            // ��ͷ����ָ�����ÿ�
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



