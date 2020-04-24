#include "linklist.h"
#include<cstring>
ElemType InitElemType(int count,const char unit[], double purePrice,double salePrice,const char category[], const char name[]){
    ElemType data;
    data.count=count;
    strcpy(data.unit,unit);
    data.purePrice = purePrice;
    data.salePrice = salePrice;
    strcpy(data.category,category);
    strcpy(data.name,name);
    return data;
}
void InitList_L(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));  // 申请存放一个结点数据所需要的内在空间
	if (!L)   exit(1);                        // 存储分配失败
    L->next = NULL;    // 表头结点的指针域置空
    L->data=InitElemType(0,"",0,0,"","");
}

int ListLength_L(LinkList L)
{
	LinkList  p;
	int k = 0;
	p = L->next;                             // p指向链表中的第一个结点
	while (p)
	{
		k++;  p = p->next;
	}              // k计非空结点数
	return k;
}

LNode* LocateElem_L(LinkList L, string e)
{
	// 否则返回空指针
	LinkList  p;
	p = L->next;                               // p指向链表中的第一个结点
	while (p && p->data.name != e) p = p->next;
	return p;
}

int LocateElem_L_2(LinkList L, string e)
{
	int i = 0;
	LinkList  p;
	p = L->next;                               // p指向链表中的第一个结点
	while (p && p->data.name != e) { p = p->next; i++; }
	return i;
}

bool ListInsert_L(LinkList& L, int i, ElemType e)
{
	LinkList p, s;
	int j;
	p = L;  j = 0;
	while (p->next && j < i - 1) { p = p->next; j++; }   // 寻找第i-1个结点,并让p指向此结点
	if (j != i - 1)   return false;                   // i的位置不合理
	if ((s = (LNode*)malloc(sizeof(LNode))) == NULL) exit(1);  // 存储分配失败
	s->data = e;
	s->next = p->next;  p->next = s;                  // 插入新结点
	return true;
}

bool ListDelete_L(LinkList& L, int i, ElemType& e)
{
	LinkList p, q;
	int j;
	p = L;  j = 0;
	while (p->next->next && j < i - 1) { p = p->next; j++; } //寻找第i-1个结点,并让p指向此结点
	if (j != i - 1)   return false;                     // i的位置不合理
	q = p->next;                                     // q指向其后继
	p->next = q->next;                               // 删除q所指结点
	e = q->data;    free(q);
	return true;
}

bool GetElem_L(LinkList L, int i, ElemType& e)
{
	LinkList p;
	int j;
	p = L;  j = 0;
	while (p->next && j < i) { p = p->next; j++; }  // 寻找第i个结点,并让p指向此结点
	if (j != i)   return false;                      // i的位置不合理
	e = p->data;                                     // 被取元素的值赋给e
	return true;
}

void CreateList_L_Rear(LinkList& L, ElemType a[], int n)
{
	LinkList p, q;   int i;
	L = (LinkList)malloc(sizeof(LNode));    // 创建立头结点
	q = L;                                // q始终指向尾结点，开始时尾结点也是头结点
	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));          // 创建新结点
		p->data = a[i];                               // 赋元素值
		q->next = p;                                  // 插入在尾结点之后
		q = p;                                         // q指向新的表尾
	}
	q->next = NULL;                                    // 表尾结点next域置空
}

void CreateList_L_Front(LinkList& L, ElemType a[], int n)
{    // 已知一维数组A[n]中存有线性表的数据元素，利用头插法创建单链表L
	LinkList p;   int i;
	L = (LinkList)malloc(sizeof(LNode));              //创建立头结点
	L->next = NULL;
	for (i = n - 1; i >= 0; i--)
	{
		p = (LinkList)malloc(sizeof(LNode));           //创建新结点
		p->data = a[i];                                // 赋元素值
		p->next = L->next;                          // 插入在头结点和第一个结点之间
		L->next = p;
	}
}

void DestroyList_L(LinkList& L)
{
	LinkList p, p1;
	p = L;
	while (p)
	{
		p1 = p;
		p = p->next;
		free(p1);
	}
	L = NULL;
}

void add_item(LinkList& L, ElemType e)
{

	LinkList q = (LinkList)malloc(sizeof(item));
//    ElemType data_0 = InitElemType(0,0,0,0,"","");
    if(!strcmp(L->data.name,"")&&!strcmp(L->data.category,""))
    {
        L->data=e;
    }
    else
    {
        q->data = e;
        q->next = NULL;
        q->next = L->next;
        L->next = q;
    }

}
void set_item(LinkList& L, ElemType e)
{
    L->data = e;
}
// DestroyList_L
