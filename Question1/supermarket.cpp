#include "supermarket.h"



big_category init_Supermarket() //给超市初始化
{
	big_category catalog ;
	init_big_category(catalog);
	add_item(catalog->small_category, { 5, weight, 2.5, 3.6,"food","bread" });
	add_big_category(catalog, "dail_use");

	add_item(catalog->next_big_category->small_category, { 6, for_count, 15, 20, "daily_use","shampoo1" });
	add_item(catalog->next_big_category->small_category, { 0, for_count, 15, 20, "daily_use","shampoo2" });
	add_big_category(catalog, "tool");
	add_item(catalog->next_big_category->small_category, { 6, for_count, 15, 20, "tool","hammer" });
	return catalog;
}


