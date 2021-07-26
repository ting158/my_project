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
	printf("请输入姓名：");
	scanf("%s", &(s[length].name));
	printf("请输入年龄：");
	scanf("%d", &(s[length].old));
	printf("请输入性别：");
	scanf("%s", &(s[length].sex));
	length++;
}

void show(Stu s[])
{
	printf("\t姓名\t年龄\t性别\n");
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
	printf("请输入要删除学生的姓名：");
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
			printf("删除成功\n");
			break;
		}
	}
	if (i == length)
		printf("该学生信息不存在\n");
}

void Sea_s(Stu s[])
{
	int i;
	char n[20] = { 0 };
	printf("请输入要查找学生的姓名：");
	scanf("%s", n);
	for (i = 0;i < length;i++)
	{
		if (strcmp(n, s[i].name) == 0)
		{
			printf("查找成功\n");
			printf("姓名：%s\n年龄：%d\n性别：%s\n", s[i].name, s[i].old, s[i].sex);
		}
	}
	if (i == length)
		printf("未查找到该学生信息，请先录入信息\n");
}

void Mod_s(Stu* s)
{
	int i;
	char n[20] = { 0 };
	printf("请输入要修改学生的姓名：");
	scanf("%s", n);
	for (i = 0;i < length;i++)
	{
		if (strcmp(n, s[i].name) == 0)
		{
			printf("请输入姓名：");
			scanf("%s", &(s[i].name));
			printf("请输入年龄：");
			scanf("%d", &(s[i].old));
			printf("请输入性别：");
			scanf("%s", &(s[i].sex));
			printf("修改成功\n");
			break;
		}
	}
	if (i == length)
		printf("该学生信息不存在\n");
}