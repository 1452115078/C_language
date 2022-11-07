#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void menu()
{
	printf("*******  1.add     2.deleate *******\n");
	printf("*******  3.search  4.modify  *******\n");
	printf("*******  5.show    6.sort    *******\n");
	printf("*******  0.exit              *******\n");
}
enum opition
{
	EXIT,
	ADD,
	DELEATE,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	Initcontact(&con);
	do 
	{
		menu();
		printf("请输入选项->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);
			break;
		case DELEATE:
			deleatecontact(&con);
			break;
		case SEARCH:
			searchcontact(&con);
			break;
		case MODIFY:
			modifycontact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;
		case SORT:
			sortcontact(&con);
			break;
		case EXIT:
			savecontact(&con);
			destorycontact(&con);
			printf(">>保存联系人成功<<\n");
			printf(">>退出通讯录<<\n");
			break;
		default:
			printf(">>选择错误，请重新选择<<\n");
			//break;
		}
	} while (input);
	return 0;
}