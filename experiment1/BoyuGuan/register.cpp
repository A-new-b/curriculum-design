
#include "register.h"

/*int  count , unit; // 数量 单位
	double purePrice, salePrice; // 进价 售价
	char category[10], name[10]; //类型 商品名  */

void new_Item(big_category& catalog, ElemType e) //商品新到货
{
	big_category p = catalog;
	while (p->next_big_category && strcmp(p->category_Name, e.category)) //
		p = p->next_big_category;
	if (!strcmp(p->category_Name, e.category)) //如果有大类型中的此类物品
		add_item(p->small_category, e);
	else
	{
		add_big_category(catalog, e.category);
		add_item(catalog->next_big_category->small_category, e);
	}
}

void input_item(big_category& catalog)
{
	ElemType e;
	int t = -1;
	cout << "please input the unit of new item, if it's sold by weight please input 0 ,if it's sold for count please input 1\n";
	cin >> t; e.unit = t;
	cout << "please input the number of new item\n";
	cin >> t; e.count = t;
	char tt[10];
	cout << "please input category of the item\n";
	cin >> tt; strcpy_s( e.category , tt);
	cout << "please input the name of item\n";
	cin >> tt; strcpy_s(e.name, tt);
	cout << "please input the pureprice and saleprice of item\n";
	double tttt = -1, ttt = -1; cin >> tttt >> tt;
	e.purePrice = tttt, e.salePrice = ttt;
	LinkList item = search_Item(catalog, e.name);
	if (item)
		item->data.count += t;
	else
		new_Item(catalog, e);
}




void register_category(big_category &category, char a[]) {
	add_big_category(category, a);
}
