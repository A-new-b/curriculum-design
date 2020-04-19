#pragma once
#include "supermarket.h"
#include <iostream>

//上新物品检查
void input_item(big_category& catalog);

void new_Item(big_category &catalog, ElemType e);

void register_category(big_category &category, const char a[]);