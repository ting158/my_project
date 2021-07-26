#pragma once

/*
学生信息管理系统；
具有增删查改等基本操作；
目前实现到内存操作，无法操作文件；
后续随缘更新文件操作
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

//函数声明
void Menu(); //打印菜单
void Add_s(Stu* s); //添加学生信息
void show(Stu s[]); //打印学生信息
void Del_s(Stu* s); //删除学生信息
void Sea_s(Stu s[]); //查找学生信息
void Mod_s(Stu* s); //修改学生信息