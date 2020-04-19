
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "supermarket.h"
#include "register.h"
#include "search.h"

using namespace std;


int main() {
	big_category category = init_Supermarket();
	new_Item(category, { 0, for_count, 11, 20, "sd","test" });
	input_item(category);
	LinkList p = search_Item(category, "fun");
	cout << p->data.purePrice;
	return 0;
}