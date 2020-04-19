#include "search.h"

LinkList search_Item( big_category category ,const char name[]) //查找商品
{
	big_category q = category;
	while (q)
	{
		LinkList p = q->small_category->next;
		while (p)
		{
			if (!strcmp(p->data.name, name))
				return p;
			p = p->next;
		}
		q = q->next_big_category;
	}
	return NULL;
}


big_category search_Big_Category(big_category category, const char name[]) {
	big_category p = category;
	while (p) {
		if (!strcmp(p->category_Name, name))
			return p;
		p = p->next_big_category;
	}
	return NULL;
}

int search_Items_Sold_Out(big_category category)
{
	int count = 0;
	big_category q = category;
	while (q)
	{
		LinkList p = q->small_category->next;
		while (p)
		{
			if (p->data.count == 0)
				count++;
			p = p->next;
		}
		q = q->next_big_category;
	}
	return count;
}

