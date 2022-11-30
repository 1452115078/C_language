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
