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
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	Initcontact(&con);
	do 
	{
		menu();
		printf("������ѡ��->");
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
			printf(">>������ϵ�˳ɹ�<<\n");
			printf(">>�˳�ͨѶ¼<<\n");
			break;
		default:
			printf(">>ѡ�����������ѡ��<<\n");
			//break;
		}
	} while (input);
	return 0;
}