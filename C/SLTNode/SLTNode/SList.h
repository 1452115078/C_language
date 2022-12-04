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

//
SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSLTNode(int n);
void SLTPrint(SLTNode* phead);
//
//单链表尾插
void SLTNodepushback(SLTNode** pphead, SLTDataType x);
//单链表尾删
void SLTNodepopback(SLTNode** pphead);
//
//单链表头插
void SLTNodepushfront(SLTNode** pphead, SLTDataType x);
//单链表头删
void SLTNodepopback(SLTNode** pphead);
//
//单链表查找
SLTNode* SLTNodefind(SLTNode* phead, SLTDataType x);
//
//单链表指定pos位置后插入
void SLTNodeinsertafter(SLTNode* pos, SLTDataType x);
//单链表指定pos位置后删除
void SLTNodeeraseafter(SLTNode* pos);
//
//单链表指定pos位置前插入
void SLTNodeinsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//单链表指定pos位置前删除
void SLTNodeerase(SLTNode** pphead, SLTNode* pos);

//单链表销毁
void SLTdestory(SLTNode** pphead);

