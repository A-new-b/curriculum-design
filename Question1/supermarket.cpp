#include "supermarket.h"



big_category init_Supermarket() // 开张
{
	big_category catalog ;
	init_big_category(catalog);
    add_item(catalog->small_category, InitElemType(5, weight, 2.5, 3.6,"food","bread"));
	add_big_category(catalog, "dail_use");

    set_item(catalog->next_big_category->small_category, InitElemType(6, for_count, 15, 20, "daily_use","shampoo1" ));
    add_item(catalog->next_big_category->small_category, InitElemType( 0, for_count, 15, 20, "daily_use","shampoo2" ));
	add_big_category(catalog, "tool");
    set_item(catalog->next_big_category->small_category, InitElemType( 6, for_count, 15, 20, "tool","hammer" ));
	return catalog;
}

big_category closedown(big_category catalog) //超市倒闭
{
	big_category p = catalog;
	big_category q= p->next_big_category;
	while (q)
	{
		DestroyList_L(p->small_category);
		p = q;
		q = q->next_big_category;
	}
	free(p);
	return big_category();
}


