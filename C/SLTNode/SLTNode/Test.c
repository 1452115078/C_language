#define _CRT_SECURE_NO_WARNINGS
#include "SList.h"

void TestSList1()
{
	/*SLTNode* n1 = BuySLTNode(1);
	SLTNode* n2 = BuySLTNode(2);
	SLTNode* n3 = BuySLTNode(3);

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;*/
	SLTNode* plist = CreateSLTNode(10);
	SLTPrint(plist);

}
void TestSList2()
{
	//SLTNode* plist = CreateSLTNode(3);
	SLTNode* plist = NULL;
	SLTNodepushback(&plist, 100);
	SLTNodepushback(&plist, 200);
	SLTNodepushback(&plist, 300);
	SLTNodepushback(&plist, 400);
	SLTPrint(plist);

	SLTNodepopback(&plist);
	SLTPrint(plist);
	SLTNodepopback(&plist);
	SLTPrint(plist);
	SLTNodepopback(&plist);
	SLTPrint(plist);
	SLTNodepopback(&plist);
	SLTPrint(plist);
	//SLTNodepopback(&plist);
}
void TestSList3()
{
	//SLTNode* plist = CreateSLTNode(3);
	SLTNode* plist = NULL;
	SLTNodepushfront(&plist, 100);
	SLTNodepushfront(&plist, 200);
	SLTNodepushfront(&plist, 300);
	SLTNodepushfront(&plist, 400);
	SLTPrint(plist);

	SLTNodepopfront(&plist);
	SLTPrint(plist);
	SLTNodepopfront(&plist);
	SLTPrint(plist);
	SLTNodepopfront(&plist);
	SLTPrint(plist);
	SLTNodepopfront(&plist);
	SLTPrint(plist);
	//SLTNodepopfront(&plist);
}
void TestSList4()
{
	//SLTNode* plist = CreateSLTNode(4);
	SLTNode* plist = NULL;
	SLTNodepushback(&plist, 100);
	SLTNodepushback(&plist, 200);
	SLTNodepushback(&plist, 300);
	SLTNodepushback(&plist, 400);
	SLTPrint(plist);

	SLTNode* pos = SLTNodefind(plist, 300);
	//if (pos)
	//{
	//	printf("找到了\n");
	//}
	//else
	//{
	//	printf("找不到\n");
	//}
	SLTNodeinsertafter(pos, 10);
	SLTPrint(plist);

	SLTNodeeraseafter(pos);
	SLTPrint(plist);
	SLTNodeeraseafter(pos);
	SLTPrint(plist);
	SLTNodeeraseafter(pos);
	SLTPrint(plist);
}
void TestSList5()
{
	//SLTNode* plist = CreateSLTNode(3);
	SLTNode* plist = NULL;
	SLTNodepushback(&plist, 100);
	SLTNodepushback(&plist, 200);
	SLTNodepushback(&plist, 300);
	SLTNodepushback(&plist, 400);
	SLTPrint(plist);

	SLTNode* pos = SLTNodefind(plist, 200);
	SLTNodeerase(&plist, pos);
	SLTPrint(plist);

	pos = SLTNodefind(plist, 300);
	SLTNodeerase(&plist, pos);
	SLTPrint(plist);

	pos = SLTNodefind(plist, 400);
	SLTNodeerase(&plist, pos);
	SLTPrint(plist);

	pos = SLTNodefind(plist, 400);
	SLTNodeerase(&plist, pos);
	SLTPrint(plist);

	SLTdestory(&plist);

}
int main()
{
	//TestSList1();
	//TestSList2();
	//TestSList3();
	//TestSList4();
	TestSList5();
	return 0;
}