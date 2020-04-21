#pragma once
#include <string>

//ÿ����Ʒ���͵���ƷĿ¼


using namespace std;

typedef struct  ElemType
{
	int  count , unit; // ���� ��λ
	double purePrice, salePrice; // ���� �ۼ�
	char category[10], name[10]; //���� ��Ʒ��  
}item;


typedef struct Node {
	ElemType data;
	struct  Node* next;
}LNode, * LinkList;                 // LinkListΪ�ṹ��ָ������

void InitList_L(LinkList& L);

int ListLength_L(LinkList L);// LΪ��ͷ���������ͷָ�룬����������L��ָ����ĳ���


LNode* LocateElem_L(LinkList L, string e); // ��L��ָ�ĵ������в��ҵ�һ��ֵ��e ��ȵĽ�㣬�����ڣ��򷵻���ָ�룻

int LocateElem_L_2(LinkList L, string e);// ��L��ָ�ĵ������в��ҵ�һ��ֵ��e��ȵĽ�㣬�����ڣ��򷵻�Ԫ��˳��(����ֵ+2Ϊ��ʵ˳��)�����򷵻�0

bool ListInsert_L(LinkList& L, int i, ElemType e); //�ڴ���ͷ���ĵ�����L�еĵ�i�����֮ǰ����Ԫ��e

bool ListDelete_L(LinkList& L, int i, ElemType& e); // ɾ������ͷ���ĵ�����L�еĵ�i����㣬����e������ֵ

bool GetElem_L(LinkList L, int i, ElemType& e); // ȡ��������L�е�i��Ԫ�أ�����e������ֵ{    

void CreateList_L_Rear(LinkList& L, ElemType a[], int n);// ��֪һά����A[n]�д������Ա������Ԫ�أ�����β�巨����������L

void CreateList_L_Front(LinkList& L, ElemType a[], int n);

void DestroyList_L(LinkList& L);

void add_item(LinkList& L, ElemType e);
