#include "register.h"

void new_Item(big_category &catalog, ElemType e) //商品新到货
{
	big_category p = catalog;
	while (p->next_big_category && strcmp(p->category_Name, e.category)) //
		p = p->next_big_category;
	if (!strcmp(p->category_Name, e.category)) //如果有大类型中的此类物品
		add_item(p->small_category,e);
	else
	{
		add_big_category(catalog, e.category);
		add_item(catalog->next_big_category->small_category, e);
	}
}


void register_category(big_category &category, char a[]) {
	add_big_category(category, a);
}
