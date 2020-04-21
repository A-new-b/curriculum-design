#ifndef COMMODITY_H_INCLUDED
#define COMMODITY_H_INCLUDED
#include <stdio.h>
#include <conio.h>                    //����Ļ������ͷ�ļ�
#include <string.h>
#include <malloc.h>
#define MAXSIZE 100
typedef struct                         
{
	//��������Ϊһ����Ʒ��Ϣ�Ľṹ��
	char name[20];                     //��Ʒ����
	char category[20];                 //��Ʒ���
	int  num;                          //��Ʒ����
	double purprice;                   //����purchase price
	double selprice;                   //�ۼ�selling price	
	char purtime[20];                  //����ʱ��
	char seltime[20];                  //����ʱ��
	char unit[20];                     //������λ
}commodity;                                

typedef struct node                    
{
	//���嵥����ڵ�����
	commodity data;                        //������
	struct node *next;                     //ָ����ָ���̽��
}LNode;

//LNode *Init_G();                       //��ʼ������
void input(LNode *L);                       //��������β�巨��
LNode* search(LNode *L, commodity x);       //������Ʒ
void insert(LNode *L, commodity x);         //������Ʒ
void storage(LNode *L, commodity x);        //��Ʒ���
void commodityChange(LNode *L, commodity x);    //����Ʒname�����޸�
int del(LNode *L, commodity x);             //ɾ��
void save(LNode *L);                        //�������
void menu();                                //����ѡ�񴰿�  
#endif // GOODS_H_INCLUDED
