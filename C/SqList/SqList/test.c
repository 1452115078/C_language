#define _CRT_SECURE_NO_WARNINGS
#include "SqList.h"

void TestSqList1()
{
	SL s;
	SLinit(&s);//≥ı ºªØ
	SLpushback(&s, 1);//Œ≤≤Â
	SLpushback(&s, 2);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLprint(&s);

	SLpopback(&s);//Œ≤…æ
	SLprint(&s);

	SLpushback(&s, 9);//Œ≤≤Â
	SLprint(&s);

	SLpopback(&s);//Œ≤…æ
	SLpopback(&s);//Œ≤…æ
	SLpopback(&s);//Œ≤…æ
	SLpopback(&s);//Œ≤…æ
	//SLpopback(&s);//Œ≤…æ
	SLprint(&s);



	SLdestory(&s);
}
void TestSqList2()
{
	SL s;
	SLinit(&s);//≥ı ºªØ
	SLpushfront(&s, 1);//Õ∑≤Â
	//SLpushfront(&s, 2);//Õ∑≤Â
	//SLpushfront(&s, 3);//Õ∑≤Â
	//SLpushfront(&s, 4);//Õ∑≤Â
	SLprint(&s);

	SLpopfront(&s);//Õ∑…æ


	

	SLdestory(&s);
}
void TestSqList3()
{
	SL s;
	SLinit(&s);//≥ı ºªØ
	SLpushback(&s, 1);//Œ≤≤Â
	SLpushback(&s, 2);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLprint(&s);

	SLinsert(&s, 2, 9);//»Œ“‚Œª÷√≤Â»Î
	SLprint(&s);



	SLerase(&s, 0);//»Œ“‚Œª÷√…æ≥˝
	SLerase(&s, 0);//»Œ“‚Œª÷√…æ≥˝
	SLerase(&s, 0);//»Œ“‚Œª÷√…æ≥˝
	SLerase(&s, 0);//»Œ“‚Œª÷√…æ≥˝
	SLerase(&s, 0);//»Œ“‚Œª÷√…æ≥˝
	SLprint(&s);


	SLdestory(&s);
}
void TestSqList4()
{
	SL s;
	SLinit(&s);//≥ı ºªØ
	SLpushback(&s, 1);//Œ≤≤Â
	SLpushback(&s, 2);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLprint(&s);

	SLpopback(&s);//Œ≤…æ
	SLprint(&s);

	SLpushback(&s, 9);//Œ≤≤Â
	SLprint(&s);

	SLpopback(&s);//Œ≤…æ
	SLpopback(&s);//Œ≤…æ
	SLpopback(&s);//Œ≤…æ
	//SLpopback(&s);//Œ≤…æ
	SLprint(&s);


	SLdestory(&s);
}
void TestSqList5()
{
	SL s;
	SLinit(&s);//≥ı ºªØ
	SLpushback(&s, 1);//Œ≤≤Â
	SLpushback(&s, 2);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLpushback(&s, 4);//Œ≤≤Â
	SLpushback(&s, 3);//Œ≤≤Â
	SLpushback(&s, 5);//Œ≤≤Â
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