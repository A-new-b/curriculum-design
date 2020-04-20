#include "commodity.h"
#include <windows.h>
#include <time.h>
/*
* ���ܣ��Ǽ���Ʒ��Ϣ
* ���룺����Ǽ���Ʒ��������������Ϣ
* ������β�巨��������
*/
void input(LNode *L)                                
{
	//β�巨��������
	int i, n;
	LNode *r = L, *s;
	commodity x;
	printf("\n��������Ʒ������:");
	scanf("%d", &n);
	printf("\n ***   ��������Ʒ�����ࡢ���ơ����������ۡ��ۼۡ����ʱ�䡢����ʱ�䡢������λ   ***\n");
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		printf("              ����Ʒ���ࣺ ");
		scanf("%s", x.category);

		printf("              ����Ʒ���ƣ� ");
		scanf("%s", x.name);	

		printf("              ����Ʒ������ ");
		scanf("%d", &x.num);

		printf("              ����Ʒ���ۣ� ");
		scanf("%lf", &x.purprice);

		printf("              ����Ʒ�ۼۣ� ");
		scanf("%lf", &x.selprice);

		printf("              ����Ʒ���ʱ�䣺 ");
		scanf("%s", x.purtime);

		printf("              ����Ʒ����ʱ�䣺 ");
		scanf("%s", x.seltime);

		printf("              ����Ʒ������λ�� ");
		scanf("%s", x.unit);

		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = NULL;
		r->next = s;
		r = s;
		printf("\n");
	}
	printf("\n ***     ***     �Ǽǽ���     ***     �����ϲ�     ***     ***\n");
}

/*
* ���ܣ�������Ʒ��Ϣ
* ���룺Ҫ���ҵ���Ʒ����
* �������Ʒ��Ϣ
* ��������Ԫ��ֵ�������в�ѯ
*/
LNode* search(LNode *L, commodity x)
{
	LNode *p = L->next;
	while (p != NULL && (strcmp(p->data.name, x.name) != 0))
	{
		p = p->next;
	}
	if (p != NULL && (strcmp(p->data.name, x.name) == 0))            //���ҵ���Ӧ��Ʒ������ָ��
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

/*
* ���ܣ�����������Ʒ
* ���룺������Ʒ�����࣬���Ƽ�����
* ����������Ĳ���
*/
void insert(LNode *L, commodity x)
{
	LNode *p = L, *s;
	while (p->next != NULL && (strcmp(p->next->data.name, x.name) != 0))            //��������Ʒ������ʱ�ɲ��뵽����������
	{
		p = p->next;
	}
	s = (LNode*)malloc(sizeof(LNode));
	s->data = x;
	s->next = p->next;
	p->next = s;
}

/*
* ���ܣ���Ʒ���
* ���룺�����Ʒ��Ϣ
*/
void storage(LNode *L, commodity x)
{
	LNode *p;
	p = search(L, x);
	if (p == NULL)                                            //������û�������Ʒʱ��ֱ�Ӳ���
	{
		insert(L, x);
	}
	else
	{
		p->data.num = p->data.num + x.num;                     //���������������Ʒʱֻ������Ʒ������
	}
}
/*
* ���ܣ���Ʒ��Ϣ�޸�
* ���룺��Ʒ����
*/
void commodityChange(LNode *L, commodity x)                           //����Ʒ���ƽ����޸�
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
		printf("\n�ֿ����޴���Ʒ��\n");
	}
	else
	{
		printf("\n               �޸���Ʒ���ࣺ         ");
		scanf("%s", chcategory);
		strcpy(p->data.category, chcategory);

		printf("\n               �޸���Ʒ���ƣ�         ");
		scanf("%s", chname);
		strcpy(p->data.name, chname);

		printf("\n               �޸���Ʒ������         ");
		scanf("%d", &chnum);
		p->data.num = chnum;

		printf("                 �޸���Ʒ���ۣ� ");
		scanf("%lf", &chpurprice);
		p->data.purprice = chpurprice;

		printf("                 �޸���Ʒ�ۼۣ� ");
		scanf("%lf", &chselprice);
		p->data.selprice = chselprice;

		printf("                 �޸���Ʒ���ʱ�䣺 ");
		scanf("%s", chpurtime);
		strcpy(p->data.purtime, chpurtime);

		printf("                 �޸���Ʒ����ʱ�䣺 ");
		scanf("%s", chseltime);
		strcpy(p->data.seltime, chseltime);

		printf("                 �޸���Ʒ������λ�� ");
		scanf("%s", chunit);
		strcpy(p->data.unit, chunit);
		printf("\n               �̡̡̡̡̡̳ɹ��޸ģ�\n");
		printf("\n");
	}
}
/*
* ���ܣ�ɾ����Ʒ
* ���룺Ҫɾ������Ʒ���
* ������ɾ������Ԫ��
*/
int del(LNode *L, commodity x)                           
{
	//ɾ����Ʒ��Ϣ
	LNode *p;
	long n;
	int flag = 0;                                      //flagΪ�ж���Ʒ�Ƿ�ɾ���ı�־
	p = L;
	for (; p != NULL; p = p->next)
	{
		if (p->next != NULL && (strcmp(p->next->data.name, x.name) == 0))
		{
			p->next = p->next->next;                   //ɾ�����
			flag = 1;
			break;
		}
	}
	if (p == NULL && flag == 0)
	{
		printf("\n                             �ֿ��޴���Ʒ��");
		printf("\n--------------------------------------------------");
		menu();
	}
	return 1;
}

/*
* ���ܣ������������
* �����������Ϣ
* ������������д���ļ�
*/
void save(LNode *L)                               
{
	//����������
	int i;
	LNode *p = L->next, *q = L->next;
	FILE *fp;                                         //�ļ�ָ��
	if (p == NULL)
	{
		printf("����û����Ʒ��Ϣ������������Ϣ�ٽ��в���\n");
		return;
	}
	fp = fopen("commodity.txt", "w");                 //�ڵ�ǰĿ¼�´�commodity.txt�ļ�������ֻ����д������
	if (!fp)
	{
		printf("�ļ�������\n");
		return;
	}
	//����Ʒ��Ϣд���ļ�
	fprintf(fp, "=======================��Ʒ��Ϣһ����=======================\n");
	fprintf(fp, "\n");
	fprintf(fp, "��Ʒ����\t��Ʒ����\t��Ʒ����\n");
	while (p != NULL)
	{
		fprintf(fp, "%s\t\t%s\t\t%d\t\t%lf\t\t%lf\t\t%s\t\t%s\t\t%s\t\t", p->data.name, p->data.category, p->data.num,p->data.purprice, p->data.selprice, p->data.purtime,p->data.seltime, p->data.unit);
		fprintf(fp, "\n");
		p = p->next;
	}
	fclose(fp);                                      //�ѻ����������ʣ�������������ں˻�����,���ͷ��ļ�ָ��
	printf("�����ѳɹ������ļ�commodity.txt��\n");
}
/*
* ���ܣ���ʾϵͳ���ܽ���
*/
void menu()
{
	printf("\n\n\n\n\n\n");
	printf("*********************��ӭ���볬����Ʒ��Ϣά������ϵͳ*********************\n");
	printf("\n\n");
	system("color 66");
	printf("���Ժ�...\n");
	for (int fuhao = 0; fuhao < 66; fuhao++)
	{
		Sleep(30);
		printf(">");
	}
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                       ������������������������������������������������������������������������������\n");
	printf("                       ��                                    ��\n");
	printf("                       ��       ��ѡ����Ҫ���еĲ���         ��\n");
	printf("   ��ӭ����            ��                                    ��\n");
	printf("                       ��          1 �Ǽ���Ʒ��Ϣ            ��\n");
	printf("                       ��                                    ��\n");
	printf("                       ��          2 ������Ʒ��Ϣ            ��\n");
	printf("   ������Ʒ            ��                                    ��\n");
	printf("                       ��          3 �޸���Ʒ��Ϣ            ��\n");
	printf("                       ��                                    ��\n");
	printf("                       ��          4 ��Ʒ��Ϣ����            ��\n");
	printf("   ��Ϣά��            ��                                    ��\n");
	printf("                       ��          5 ɾ����Ʒ                ��\n");
	printf("                       ��                                    ��\n");
	printf("                       ��          6 �������                ��\n");
	printf("                       ��                                    ��\n");
	printf("                       ��          0 �˳�ϵͳ                ��\n");
	printf("                       ��������������������������������������������������������������������������������\n");

}

