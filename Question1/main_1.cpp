
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
	cout << search_Items_Sold_Out(category);
	return 0;
}