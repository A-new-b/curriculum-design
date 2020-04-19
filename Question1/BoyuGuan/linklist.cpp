#include "linklist.h"

void InitList_L(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));  // ������һ�������������Ҫ�����ڿռ�
	if (!L)   exit(1);                        // �洢����ʧ��
	L->next = NULL;                            // ��ͷ����ָ�����ÿ�
}

int ListLength_L(LinkList L)
{
	LinkList  p;
	int k = 0;
	p = L->next;                             // pָ�������еĵ�һ�����
	while (p)
	{
		k++;  p = p->next;
	}              // k�Ʒǿս����
	return k;
}

LNode* LocateElem_L(LinkList L, string e)
{
	// ���򷵻ؿ�ָ��
	LinkList  p;
	p = L->next;                               // pָ�������еĵ�һ�����
	while (p && p->data.name != e) p = p->next;
	return p;
}

int LocateElem_L_2(LinkList L, string e)
{
	int i = 0;
	LinkList  p;
	p = L->next;                               // pָ�������еĵ�һ�����
	while (p && p->data.name != e) { p = p->next; i++; }
	return i;
}

bool ListInsert_L(LinkList& L, int i, ElemType e)
{
	LinkList p, s;
	int j;
	p = L;  j = 0;
	while (p->next && j < i - 1) { p = p->next; j++; }   // Ѱ�ҵ�i-1�����,����pָ��˽��
	if (j != i - 1)   return false;                   // i��λ�ò�����
	if ((s = (LNode*)malloc(sizeof(LNode))) == NULL) exit(1);  // �洢����ʧ��
	s->data = e;
	s->next = p->next;  p->next = s;                  // �����½��
	return true;
}

bool ListDelete_L(LinkList& L, int i, ElemType& e)
{
	LinkList p, q;
	int j;
	p = L;  j = 0;
	while (p->next->next && j < i - 1) { p = p->next; j++; } //Ѱ�ҵ�i-1�����,����pָ��˽��
	if (j != i - 1)   return false;                     // i��λ�ò�����
	q = p->next;                                     // qָ������
	p->next = q->next;                               // ɾ��q��ָ���
	e = q->data;    free(q);
	return true;
}

bool GetElem_L(LinkList L, int i, ElemType& e)
{
	LinkList p;
	int j;
	p = L;  j = 0;
	while (p->next && j < i) { p = p->next; j++; }  // Ѱ�ҵ�i�����,����pָ��˽��
	if (j != i)   return false;                      // i��λ�ò�����
	e = p->data;                                     // ��ȡԪ�ص�ֵ����e
	return true;
}

void CreateList_L_Rear(LinkList& L, ElemType a[], int n)
{
	LinkList p, q;   int i;
	L = (LinkList)malloc(sizeof(LNode));    // ������ͷ���
	q = L;                                // qʼ��ָ��β��㣬��ʼʱβ���Ҳ��ͷ���
	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));          // �����½��
		p->data = a[i];                               // ��Ԫ��ֵ
		q->next = p;                                  // ������β���֮��
		q = p;                                         // qָ���µı�β
	}
	q->next = NULL;                                    // ��β���next���ÿ�
}

void CreateList_L_Front(LinkList& L, ElemType a[], int n)
{    // ��֪һά����A[n]�д������Ա������Ԫ�أ�����ͷ�巨����������L
	LinkList p;   int i;
	L = (LinkList)malloc(sizeof(LNode));              //������ͷ���
	L->next = NULL;
	for (i = n - 1; i >= 0; i--)
	{
		p = (LinkList)malloc(sizeof(LNode));           //�����½��
		p->data = a[i];                                // ��Ԫ��ֵ
		p->next = L->next;                          // ������ͷ���͵�һ�����֮��
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
	q->data = e;
	q->next = NULL;
	q->next = L->next;
	L->next = q;
}
// DestroyList_L