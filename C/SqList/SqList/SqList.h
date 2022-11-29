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


void SLinit(SL* ps);//初始化
void SLdestory(SL* ps);//销毁
void SLcheckcapicity(SL* ps);//检查容量
void SLprint(SL* ps);//打印

void SLpushback(SL* ps, SLDataType x);//尾插
void SLpopback(SL* ps);//尾删

void SLpushfront(SL* ps, SLDataType x);//头插
void SLpopfront(SL* ps);//头删

void SLinsert(SL* ps, int pos, SLDataType x);//任意位置插入
void SLerase(SL* ps, int pos);//任意位置删除

int SLfind(SL* ps, int pos, int begin);//查找