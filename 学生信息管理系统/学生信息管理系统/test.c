#define _CRT_SECURE_NO_WARNINGS 1


#include "student.h"

int main()
{
	int inpute;
	do
	{
		Menu();
		printf("��������Ҫ���еĲ�����");
		scanf("%d", &inpute);
		switch (inpute)
		{
		case Add:
			Add_s(&s);
			printf("��ӳɹ�\n");
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
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("���������������������룡\n");
			break;
		}
	} while (inpute);
	return 0;
}