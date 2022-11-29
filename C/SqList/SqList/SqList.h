#pragma once
#include<stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct	SqList
{
	SLDataType* a;
	int size;
	int capicity;
}SL;


void SLinit(SL* ps);//��ʼ��
void SLdestory(SL* ps);//����
void SLcheckcapicity(SL* ps);//�������
void SLprint(SL* ps);//��ӡ

void SLpushback(SL* ps, SLDataType x);//β��
void SLpopback(SL* ps);//βɾ

void SLpushfront(SL* ps, SLDataType x);//ͷ��
void SLpopfront(SL* ps);//ͷɾ

void SLinsert(SL* ps, int pos, SLDataType x);//����λ�ò���
void SLerase(SL* ps, int pos);//����λ��ɾ��

int SLfind(SL* ps, int pos, int begin);//����