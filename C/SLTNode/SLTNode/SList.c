#define _CRT_SECURE_NO_WARNINGS
#include "SList.h"
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL; 

	return newnode;
}
SLTNode* CreateSLTNode(int n)
{
	SLTNode* phead = NULL;
	SLTNode* ptail = NULL;
	//int x = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//scanf("%d", &x);
		//SLTNode* newnode = BuySLTNode(x);
		SLTNode* newnode = BuySLTNode(i + 1);
		if (phead == NULL)
		{
			ptail = phead = newnode;
		}
		else
		{
			ptail->next = newnode;
			ptail = newnode;
		}
	}
	return phead;
}
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
//������β��
void SLTNodepushback(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	SLTNode* cur = *pphead;
	if (cur == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
////������βɾ1
//void SLTNodepopback(SLTNode** pphead)
//{
//	assert(*pphead);
//	SLTNode* cur = *pphead;
//	if (cur->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		while (cur->next->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = NULL;
//	}
//}
//������βɾ2
void SLTNodepopback(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* per = NULL;
	SLTNode* cur = *pphead;
	if (cur->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		while (cur->next)
		{
			per = cur;
			cur = cur->next;
		}
		per->next = NULL;
	}
}
//������ͷ��
void SLTNodepushfront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//������ͷɾ
void SLTNodepopfront(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* next = (*pphead)->next;
	*pphead = next;
}
//���������
SLTNode* SLTNodefind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	if (phead == NULL)
	{
		return NULL;
	}
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return cur;
}
//������ָ��posλ�ú����
void SLTNodeinsertafter(SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	SLTNode* nextnode = pos->next;
	pos->next = newnode;
	newnode->next = nextnode;
}
//������ָ��posλ�ú�ɾ��
void SLTNodeeraseafter(SLTNode* pos)
{
	assert(pos->next);
	SLTNode* nextnode = pos->next;
	pos->next = nextnode->next;
	free(nextnode);
}
//������ָ��posλ��ǰ����
void SLTNodeinsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	if (*pphead == pos)
	{
		SLTNodepushfront(pphead, x);
	}
	else
	{
		SLTNode* newnode = BuySLTNode(x);
		SLTNode* perv = *pphead;
		while (perv->next != pos)
		{
			perv = perv->next;
		}
		perv->next = newnode;
		newnode->next = pos;
	}
}
//������ָ��posλ��ǰɾ��
void SLTNodeerase(SLTNode** pphead, SLTNode* pos)
{
	SLTNode* cur = *pphead;
	if (*pphead == pos)
	{
		SLTNodepopfront(pphead);
	}
	else if ((*pphead)->next == pos)
	{
		*pphead = pos;
	}
	else
	{

		while (cur->next->next != pos)
		{
			cur = cur->next;
		}
		cur->next = pos;
	}
}

//����������
void SLTdestory(SLTNode** pphead)
{
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* nextnode = cur->next;
		cur = nextnode;
		free(*pphead);
		*pphead = cur;
		/*free(cur);
		cur = nextnode;*/
	}

}
