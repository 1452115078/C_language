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

//������β��
void SLTNodepushback(SLTNode** pphead, SLTDataType x);
//������βɾ
void SLTNodepopback(SLTNode** pphead);
//������ͷ��
void SLTNodepushfront(SLTNode** pphead, SLTDataType x);
//������ͷɾ
void SLTNodepopback(SLTNode** pphead);


