#define _CRT_SECURE_NO_WARNINGS 1


#include "student.h"

int main()
{
	int inpute;
	do
	{
		Menu();
		printf("请输入你要进行的操作：");
		scanf("%d", &inpute);
		switch (inpute)
		{
		case Add:
			Add_s(&s);
			printf("添加成功\n");
			break;
		case Del:
			Del_s(&s);
			break;
		case Sea:
			Sea_s(s);
			break;
		case Mod:
			Mod_s(&s);
			break;
		case Show:
			show(s);
			break;
		case exit:
			printf("退出成功\n");
			break;
		default:
			printf("您的输入有误，请重新输入！\n");
			break;
		}
	} while (inpute);
	return 0;
}