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
		printf("    ��������ѡ��Ĳ������:\n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			printf("\n��ѡ����¼����Ʒ��Ϣ����!\n\n");
			input(L);
			Sleep(2000);
			system("cls");
			break;			
		case 2:
			printf("\n��ѡ���˲�����Ʒ��Ϣ����!\n\n");
			printf("\n");
			printf("\n������Ҫ���ҵ���Ʒ������\n");
			printf("\n");
			printf("�����������Ϊ��");
			printf("\n");
			scanf("%s", x.name);
			p = search(L, x);
			if (p == NULL)
			{
				printf("\n����Ʒ�����ڡ�\n");
			}
			else
			{
				printf("\n��Ʒ����    ��Ʒ����    ��Ʒ����    ��Ʒ����    ��Ʒ�ۼ�    ��Ʒ���ʱ��    ��Ʒ����ʱ��    ��Ʒ������λ\n");
				printf("%5s%10s%12d%10lf%10lf%10s%10s%5s\n", p->data.name, p->data.category, p->data.num, p->data.purprice, p->data.selprice, p->data.purtime, p->data.seltime, p->data.unit);
			}
			Sleep(2000);
			system("cls");
			break;
		case 3:
			printf("\n��ѡ�����޸���Ʒ��Ϣ����!\n\n");
			printf("\n");
			printf("\n������Ҫ�޸ĵ���Ʒ�ı��:\n");
			printf("\n");
			printf("              o��Ʒ��ţ� ");
			scanf("%s", x.name);
			commodityChange(L, x);
			Sleep(2000);
			system("cls");
			break;		
		case 4:
			printf("\n��ѡ������Ʒ��⹦��!\n\n");
			printf("\n");
			printf("\n������Ҫ������Ʒ�����ơ����༰����:\n");
			printf("\n");
			printf("               ��Ʒ���ƣ� ");
			scanf("%s", x.name);
			printf("               ��Ʒ���ࣺ ");
			scanf("%s", x.category);
			printf("               ��Ʒ������ ");
			scanf("%d", &x.num);
			storage(L, x);
			printf("\n          �̡̡̡̡̡����ɹ��� \n");
			Sleep(2000);
			system("cls");
			break;			
		case 5:
			printf("\n��ѡ������Ʒɾ������!\n\n");
			printf("\n");
			printf("\n������Ҫ�������Ʒ������:\n");
			printf("\n");
			printf("              ����Ʒ���ƣ� ");
			scanf("%s", x.category);
			del(L, x);
			printf("\n         �̡̡̡̡̡̳ɹ�ɾ����");
			printf("\n");
			printf("\n---------------------------------------------");
			Sleep(2000);
			system("cls");
			break;
		case 6:
			printf("\n��ѡ���˱����������!\n\n");
			printf("\n");
			save(L);
			printf("\n         �̡̡̡̡̡̱���ɹ���");
			break;
		}
	} while (sel != 0);
	printf("��л����ʹ�ã��ټ���\n");
	return 0;
}
