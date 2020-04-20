#include "commodity.h"
#include <windows.h>
#include <time.h>
/*
* 功能：登记商品信息
* 输入：输入登记商品种类个数及相关信息
* 方法：尾插法创建链表
*/
void input(LNode *L)                                
{
	//尾插法创建链表
	int i, n;
	LNode *r = L, *s;
	commodity x;
	printf("\n请输入商品的种数:");
	scanf("%d", &n);
	printf("\n ***   请输入商品的种类、名称、数量、进价、售价、入库时间、出库时间、计量单位   ***\n");
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		printf("              此商品种类： ");
		scanf("%s", x.category);

		printf("              此商品名称： ");
		scanf("%s", x.name);	

		printf("              此商品数量： ");
		scanf("%d", &x.num);

		printf("              此商品进价： ");
		scanf("%lf", &x.purprice);

		printf("              此商品售价： ");
		scanf("%lf", &x.selprice);

		printf("              此商品入库时间： ");
		scanf("%s", x.purtime);

		printf("              此商品出库时间： ");
		scanf("%s", x.seltime);

		printf("              此商品计量单位： ");
		scanf("%s", x.unit);

		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = NULL;
		r->next = s;
		r = s;
		printf("\n");
	}
	printf("\n ***     ***     登记结束     ***     返回上层     ***     ***\n");
}

/*
* 功能：查找商品信息
* 输入：要查找的商品名称
* 输出：商品信息
* 方法：按元素值在链表中查询
*/
LNode* search(LNode *L, commodity x)
{
	LNode *p = L->next;
	while (p != NULL && (strcmp(p->data.name, x.name) != 0))
	{
		p = p->next;
	}
	if (p != NULL && (strcmp(p->data.name, x.name) == 0))            //查找到相应商品，返回指针
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

/*
* 功能：插入新增商品
* 输入：新增商品的种类，名称及数量
* 方法：链表的插入
*/
void insert(LNode *L, commodity x)
{
	LNode *p = L, *s;
	while (p->next != NULL && (strcmp(p->next->data.name, x.name) != 0))            //此名称商品不存在时可插入到已有链表上
	{
		p = p->next;
	}
	s = (LNode*)malloc(sizeof(LNode));
	s->data = x;
	s->next = p->next;
	p->next = s;
}

/*
* 功能：商品入库
* 输入：入库商品信息
*/
void storage(LNode *L, commodity x)
{
	LNode *p;
	p = search(L, x);
	if (p == NULL)                                            //链表中没有这个商品时可直接插入
	{
		insert(L, x);
	}
	else
	{
		p->data.num = p->data.num + x.num;                     //链表中中有这个商品时只增加商品的数量
	}
}
/*
* 功能：商品信息修改
* 输入：商品名称
*/
void commodityChange(LNode *L, commodity x)                           //以商品名称进行修改
{
	LNode *p;
	char chname[30];
	char chcategory[30];
	int chnum;
	double chpurprice;
	double chselprice;
	char chpurtime[20];
	char chseltime[20];
	char chunit[20];
	p = search(L, x);
	if (p == NULL)
	{
		printf("\n仓库中无此商品！\n");
	}
	else
	{
		printf("\n               修改商品种类：         ");
		scanf("%s", chcategory);
		strcpy(p->data.category, chcategory);

		printf("\n               修改商品名称：         ");
		scanf("%s", chname);
		strcpy(p->data.name, chname);

		printf("\n               修改商品数量：         ");
		scanf("%d", &chnum);
		p->data.num = chnum;

		printf("                 修改商品进价： ");
		scanf("%lf", &chpurprice);
		p->data.purprice = chpurprice;

		printf("                 修改商品售价： ");
		scanf("%lf", &chselprice);
		p->data.selprice = chselprice;

		printf("                 修改商品入库时间： ");
		scanf("%s", chpurtime);
		strcpy(p->data.purtime, chpurtime);

		printf("                 修改商品出库时间： ");
		scanf("%s", chseltime);
		strcpy(p->data.seltime, chseltime);

		printf("                 修改商品计量单位： ");
		scanf("%s", chunit);
		strcpy(p->data.unit, chunit);
		printf("\n               √√√√√√成功修改！\n");
		printf("\n");
	}
}
/*
* 功能：删除商品
* 输入：要删除的商品编号
* 方法：删除链表元素
*/
int del(LNode *L, commodity x)                           
{
	//删除商品信息
	LNode *p;
	long n;
	int flag = 0;                                      //flag为判断商品是否删除的标志
	p = L;
	for (; p != NULL; p = p->next)
	{
		if (p->next != NULL && (strcmp(p->next->data.name, x.name) == 0))
		{
			p->next = p->next->next;                   //删除语句
			flag = 1;
			break;
		}
	}
	if (p == NULL && flag == 0)
	{
		printf("\n                             仓库无此商品！");
		printf("\n--------------------------------------------------");
		menu();
	}
	return 1;
}

/*
* 功能：保存操作数据
* 输出：所有信息
* 方法：把数据写入文件
*/
void save(LNode *L)                               
{
	//保存操作结果
	int i;
	LNode *p = L->next, *q = L->next;
	FILE *fp;                                         //文件指针
	if (p == NULL)
	{
		printf("现在没有商品信息，请先输入信息再进行操作\n");
		return;
	}
	fp = fopen("commodity.txt", "w");                 //在当前目录下打开commodity.txt文件并设置只允许“写”操作
	if (!fp)
	{
		printf("文件不存在\n");
		return;
	}
	//将商品信息写入文件
	fprintf(fp, "=======================商品信息一览表=======================\n");
	fprintf(fp, "\n");
	fprintf(fp, "商品名称\t商品种类\t商品数量\n");
	while (p != NULL)
	{
		fprintf(fp, "%s\t\t%s\t\t%d\t\t%lf\t\t%lf\t\t%s\t\t%s\t\t%s\t\t", p->data.name, p->data.category, p->data.num,p->data.purprice, p->data.selprice, p->data.purtime,p->data.seltime, p->data.unit);
		fprintf(fp, "\n");
		p = p->next;
	}
	fclose(fp);                                      //把缓冲区内最后剩余的数据输出到内核缓冲区,并释放文件指针
	printf("数据已成功导入文件commodity.txt！\n");
}
/*
* 功能：显示系统功能界面
*/
void menu()
{
	printf("\n\n\n\n\n\n");
	printf("*********************欢迎进入超市商品信息维护管理系统*********************\n");
	printf("\n\n");
	system("color 66");
	printf("请稍后...\n");
	for (int fuhao = 0; fuhao < 66; fuhao++)
	{
		Sleep(30);
		printf(">");
	}
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("                       ┃                                    ┃\n");
	printf("                       ┃       请选择您要进行的操作         ┃\n");
	printf("   欢迎进入            ┃                                    ┃\n");
	printf("                       ┃          1 登记商品信息            ┃\n");
	printf("                       ┃                                    ┃\n");
	printf("                       ┃          2 查找商品信息            ┃\n");
	printf("   超市商品            ┃                                    ┃\n");
	printf("                       ┃          3 修改商品信息            ┃\n");
	printf("                       ┃                                    ┃\n");
	printf("                       ┃          4 商品信息排序            ┃\n");
	printf("   信息维护            ┃                                    ┃\n");
	printf("                       ┃          5 删除商品                ┃\n");
	printf("                       ┃                                    ┃\n");
	printf("                       ┃          6 保存操作                ┃\n");
	printf("                       ┃                                    ┃\n");
	printf("                       ┃          0 退出系统                ┃\n");
	printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");

}

