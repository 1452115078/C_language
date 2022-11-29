#define _CRT_SECURE_NO_WARNINGS
#include "SqList.h"

void TestSqList1()
{
	SL s;
	SLinit(&s);//��ʼ��
	SLpushback(&s, 1);//β��
	SLpushback(&s, 2);//β��
	SLpushback(&s, 3);//β��
	SLpushback(&s, 3);//β��
	SLprint(&s);

	SLpopback(&s);//βɾ
	SLprint(&s);

	SLpushback(&s, 9);//β��
	SLprint(&s);

	SLpopback(&s);//βɾ
	SLpopback(&s);//βɾ
	SLpopback(&s);//βɾ
	SLpopback(&s);//βɾ
	//SLpopback(&s);//βɾ
	SLprint(&s);



	SLdestory(&s);
}
void TestSqList2()
{
	SL s;
	SLinit(&s);//��ʼ��
	SLpushfront(&s, 1);//ͷ��
	//SLpushfront(&s, 2);//ͷ��
	//SLpushfront(&s, 3);//ͷ��
	//SLpushfront(&s, 4);//ͷ��
	SLprint(&s);

	SLpopfront(&s);//ͷɾ


	

	SLdestory(&s);
}
void TestSqList3()
{
	SL s;
	SLinit(&s);//��ʼ��
	SLpushback(&s, 1);//β��
	SLpushback(&s, 2);//β��
	SLpushback(&s, 3);//β��
	SLpushback(&s, 3);//β��
	SLprint(&s);

	SLinsert(&s, 2, 9);//����λ�ò���
	SLprint(&s);



	SLerase(&s, 0);//����λ��ɾ��
	SLerase(&s, 0);//����λ��ɾ��
	SLerase(&s, 0);//����λ��ɾ��
	SLerase(&s, 0);//����λ��ɾ��
	SLerase(&s, 0);//����λ��ɾ��
	SLprint(&s);


	SLdestory(&s);
}
void TestSqList4()
{
	SL s;
	SLinit(&s);//��ʼ��
	SLpushback(&s, 1);//β��
	SLpushback(&s, 2);//β��
	SLpushback(&s, 3);//β��
	SLpushback(&s, 3);//β��
	SLprint(&s);

	SLpopback(&s);//βɾ
	SLprint(&s);

	SLpushback(&s, 9);//β��
	SLprint(&s);

	SLpopback(&s);//βɾ
	SLpopback(&s);//βɾ
	SLpopback(&s);//βɾ
	//SLpopback(&s);//βɾ
	SLprint(&s);


	SLdestory(&s);
}
void TestSqList5()
{
	SL s;
	SLinit(&s);//��ʼ��
	SLpushback(&s, 1);//β��
	SLpushback(&s, 2);//β��
	SLpushback(&s, 3);//β��
	SLpushback(&s, 3);//β��
	SLpushback(&s, 4);//β��
	SLpushback(&s, 3);//β��
	SLpushback(&s, 5);//β��
	SLprint(&s);

	int pos = SLfind(&s, 3, 0);
	while (pos != -1)
	{
		SLerase(&s, pos);
		pos = SLfind(&s, 3, pos);
	}
	SLprint(&s);

	SLdestory(&s);
}
int main()
{
	TestSqList5();
	return 0;
}