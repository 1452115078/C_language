#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSLTNode(int n);
void SLTPrint(SLTNode* phead);

//单链表尾插
void SLTNodepushback(SLTNode** pphead, SLTDataType x);
//单链表尾删
void SLTNodepopback(SLTNode** pphead);
//单链表头插
void SLTNodepushfront(SLTNode** pphead, SLTDataType x);
//单链表头删
void SLTNodepopback(SLTNode** pphead);


