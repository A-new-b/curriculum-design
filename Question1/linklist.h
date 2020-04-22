#pragma once
#include <string>

//每种商品类型的商品目录


using namespace std;

typedef struct  ElemType
{
    int count;
    int unit; // 数量 单位
	double purePrice, salePrice; // 进价 售价
	char category[10], name[10]; //类型 商品名  
}item;


typedef struct Node {
	ElemType data;
	struct  Node* next;
}LNode, * LinkList;                 // LinkList为结构体指针类型

ElemType InitElemType(int count,int unit, double purePrice,double salePrice,const char category[], const char name[]);

void InitList_L(LinkList& L);

int ListLength_L(LinkList L);// L为带头结点的链表的头指针，本函数返回L所指链表的长度


LNode* LocateElem_L(LinkList L, string e); // 在L所指的单链表中查找第一个值和e 相等的结点，若存在，则返回其指针；

int LocateElem_L_2(LinkList L, string e);// 在L所指的单链表中查找第一个值和e相等的结点，若存在，则返回元素顺序(返回值+2为真实顺序)，否则返回0

bool ListInsert_L(LinkList& L, int i, ElemType e); //在带有头结点的单链表L中的第i个结点之前插入元素e

bool ListDelete_L(LinkList& L, int i, ElemType& e); // 删除带有头结点的单链表L中的第i个结点，并让e返回其值

bool GetElem_L(LinkList L, int i, ElemType& e); // 取出单链表L中第i个元素，并用e返回其值{    

void CreateList_L_Rear(LinkList& L, ElemType a[], int n);// 已知一维数组A[n]中存有线性表的数据元素，利用尾插法创建单链表L

void CreateList_L_Front(LinkList& L, ElemType a[], int n);

void DestroyList_L(LinkList& L);

void add_item(LinkList& L, ElemType e);

void set_item(LinkList &L ,ElemType e);
