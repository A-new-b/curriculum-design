#ifndef COMMODITY_H_INCLUDED
#define COMMODITY_H_INCLUDED
#include <stdio.h>
#include <conio.h>                    //对屏幕操作的头文件
#include <string.h>
#include <malloc.h>
#define MAXSIZE 100
typedef struct                         
{
	//数据域定义为一个商品信息的结构体
	char name[20];                     //商品名称
	char category[20];                 //商品编号
	int  num;                          //商品数量
	double purprice;                   //进价purchase price
	double selprice;                   //售价selling price	
	char purtime[20];                  //进货时间
	char seltime[20];                  //出货时间
	char unit[20];                     //计量单位
}commodity;                                

typedef struct node                    
{
	//定义单链表节点类型
	commodity data;                        //数据域
	struct node *next;                     //指针域，指向后继结点
}LNode;

//LNode *Init_G();                       //初始化链表
void input(LNode *L);                       //创建链表（尾插法）
LNode* search(LNode *L, commodity x);       //查找商品
void insert(LNode *L, commodity x);         //插入商品
void storage(LNode *L, commodity x);        //商品入库
void commodityChange(LNode *L, commodity x);    //以商品name进行修改
int del(LNode *L, commodity x);             //删除
void save(LNode *L);                        //保存操作
void menu();                                //功能选择窗口  
#endif // GOODS_H_INCLUDED
