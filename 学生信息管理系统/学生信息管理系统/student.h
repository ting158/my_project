#pragma once

/*
ѧ����Ϣ����ϵͳ��
������ɾ��ĵȻ���������
Ŀǰʵ�ֵ��ڴ�������޷������ļ���
������Ե�����ļ�����
*/


#include <stdio.h>
#include <string.h>

#define MAXNUM 100

enum menu
{
	exit,
	Add,
	Del,
	Sea,
	Mod,
	Show
};


typedef struct
{
	char name[20];
	int old;
	char sex[20];
}Stu;

static int length = 0;
Stu s[MAXNUM];

//��������
void Menu(); //��ӡ�˵�
void Add_s(Stu* s); //���ѧ����Ϣ
void show(Stu s[]); //��ӡѧ����Ϣ
void Del_s(Stu* s); //ɾ��ѧ����Ϣ
void Sea_s(Stu s[]); //����ѧ����Ϣ
void Mod_s(Stu* s); //�޸�ѧ����Ϣ