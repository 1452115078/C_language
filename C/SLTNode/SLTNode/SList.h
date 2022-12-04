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
//������β��
void SLTNodepushback(SLTNode** pphead, SLTDataType x);
//������βɾ
void SLTNodepopback(SLTNode** pphead);
//
//������ͷ��
void SLTNodepushfront(SLTNode** pphead, SLTDataType x);
//������ͷɾ
void SLTNodepopback(SLTNode** pphead);
//
//���������
SLTNode* SLTNodefind(SLTNode* phead, SLTDataType x);
//
//������ָ��posλ�ú����
void SLTNodeinsertafter(SLTNode* pos, SLTDataType x);
//������ָ��posλ�ú�ɾ��
void SLTNodeeraseafter(SLTNode* pos);
//
//������ָ��posλ��ǰ����
void SLTNodeinsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//������ָ��posλ��ǰɾ��
void SLTNodeerase(SLTNode** pphead, SLTNode* pos);

//����������
void SLTdestory(SLTNode** pphead);

