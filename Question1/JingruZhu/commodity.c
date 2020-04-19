#include <stdio.h>
#include "commodityh.cpp"
#include <windows.h>
#include <time.h>


int main()
{
	commodity x;
	int sel;
	LNode *L, *p;
	L = (LNode *)malloc(sizeof(LNode));
	do
	{
		menu();
		printf("\n");
		printf("\n");
		printf("    请输入您选择的操作序号:\n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			printf("\n您选择了录入商品信息功能!\n\n");
			input(L);
			Sleep(2000);
			system("cls");
			break;			
		case 2:
			printf("\n您选择了查找商品信息功能!\n\n");
			printf("\n");
			printf("\n请输入要查找的商品的名称\n");
			printf("\n");
			printf("您输入的名称为：");
			printf("\n");
			scanf("%s", x.name);
			p = search(L, x);
			if (p == NULL)
			{
				printf("\n此商品不存在。\n");
			}
			else
			{
				printf("\n商品名称    商品种类    商品数量    商品进价    商品售价    商品入库时间    商品出库时间    商品计量单位\n");
				printf("%5s%10s%12d%10lf%10lf%10s%10s%5s\n", p->data.name, p->data.category, p->data.num, p->data.purprice, p->data.selprice, p->data.purtime, p->data.seltime, p->data.unit);
			}
			Sleep(2000);
			system("cls");
			break;
		case 3:
			printf("\n您选择了修改商品信息功能!\n\n");
			printf("\n");
			printf("\n请输入要修改的商品的编号:\n");
			printf("\n");
			printf("              o商品编号： ");
			scanf("%s", x.name);
			commodityChange(L, x);
			Sleep(2000);
			system("cls");
			break;		
		case 4:
			printf("\n您选择了商品入库功能!\n\n");
			printf("\n");
			printf("\n请输入要入库的商品的名称、种类及数量:\n");
			printf("\n");
			printf("               商品名称： ");
			scanf("%s", x.name);
			printf("               商品种类： ");
			scanf("%s", x.category);
			printf("               商品数量： ");
			scanf("%d", &x.num);
			storage(L, x);
			printf("\n          √√√√√√入库成功！ \n");
			Sleep(2000);
			system("cls");
			break;			
		case 5:
			printf("\n您选择了商品删除功能!\n\n");
			printf("\n");
			printf("\n请输入要出库的商品的名称:\n");
			printf("\n");
			printf("              此商品名称： ");
			scanf("%s", x.category);
			del(L, x);
			printf("\n         √√√√√√成功删除！");
			printf("\n");
			printf("\n---------------------------------------------");
			Sleep(2000);
			system("cls");
			break;
		case 6:
			printf("\n您选择了保存操作功能!\n\n");
			printf("\n");
			save(L);
			printf("\n         √√√√√√保存成功！");
			break;
		}
	} while (sel != 0);
	printf("感谢您的使用，再见！\n");
	return 0;
}
