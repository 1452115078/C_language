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
//单链表尾插
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
////单链表尾删1
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
//单链表尾删2
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
//单链表头插
void SLTNodepushfront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//单链表头删
void SLTNodepopfront(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* next = (*pphead)->next;
	*pphead = next;
}
//单链表查找
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
//单链表指定pos位置后插入
void SLTNodeinsertafter(SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	SLTNode* nextnode = pos->next;
	pos->next = newnode;
	newnode->next = nextnode;
}
//单链表指定pos位置后删除
void SLTNodeeraseafter(SLTNode* pos)
{
	assert(pos->next);
	SLTNode* nextnode = pos->next;
	pos->next = nextnode->next;
	free(nextnode);
}
//单链表指定pos位置前插入
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
//单链表指定pos位置前删除
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

//单链表销毁
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
