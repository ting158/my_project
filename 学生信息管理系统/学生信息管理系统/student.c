#define _CRT_SECURE_NO_WARNINGS 1

#include "student.h"

void Menu()
{
	printf("********************************\n");
	printf("***    1.Add       2.Del     ***\n");
	printf("***    3.Sea       4.Mod     ***\n");
	printf("***    5.Show      0.exit    ***\n");
	printf("********************************\n");
}

void Add_s(Stu* s)
{
	int old;
	char name[20];
	char sex[20];
	printf("������������");
	scanf("%s", &(s[length].name));
	printf("���������䣺");
	scanf("%d", &(s[length].old));
	printf("�������Ա�");
	scanf("%s", &(s[length].sex));
	length++;
}

void show(Stu s[])
{
	printf("\t����\t����\t�Ա�\n");
	int i;
	for (i = 0;i < length;i++)
	{
		printf("\t%s\t%d\t%s\n", s[i].name, s[i].old, s[i].sex);
	}
}

void Del_s(Stu* s)
{
	int i;
	char n[20] = { 0 };
	printf("������Ҫɾ��ѧ����������");
	scanf("%s", n);
	for (i = 0;i < length;i++)
	{
		if (strcmp(s, s[i].name) == 0)
		{
			for (int j = i;j < length;j++)
			{
				s[j] = s[j + 1];
			}
			length--;
			printf("ɾ���ɹ�\n");
			break;
		}
	}
	if (i == length)
		printf("��ѧ����Ϣ������\n");
}

void Sea_s(Stu s[])
{
	int i;
	char n[20] = { 0 };
	printf("������Ҫ����ѧ����������");
	scanf("%s", n);
	for (i = 0;i < length;i++)
	{
		if (strcmp(n, s[i].name) == 0)
		{
			printf("���ҳɹ�\n");
			printf("������%s\n���䣺%d\n�Ա�%s\n", s[i].name, s[i].old, s[i].sex);
		}
	}
	if (i == length)
		printf("δ���ҵ���ѧ����Ϣ������¼����Ϣ\n");
}

void Mod_s(Stu* s)
{
	int i;
	char n[20] = { 0 };
	printf("������Ҫ�޸�ѧ����������");
	scanf("%s", n);
	for (i = 0;i < length;i++)
	{
		if (strcmp(n, s[i].name) == 0)
		{
			printf("������������");
			scanf("%s", &(s[i].name));
			printf("���������䣺");
			scanf("%d", &(s[i].old));
			printf("�������Ա�");
			scanf("%s", &(s[i].sex));
			printf("�޸ĳɹ�\n");
			break;
		}
	}
	if (i == length)
		printf("��ѧ����Ϣ������\n");
}