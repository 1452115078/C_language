#define _CRT_SECURE_NO_WARNINGS
#include "SqList.h"

void SLinit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capicity = 0;
}
void SLdestory(SL* ps)
{
	if (ps->a != NULL)
	{
		free(ps->a);
		ps->size = ps->capicity = 0;
	}
}
void SLcheckcapicity(SL* ps)
{
	if (ps->size == ps->capicity)
	{
		int newcapicity = ps->capicity == 0 ? 4 : ps->capicity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapicity);
		if (tmp == NULL)
		{
			perror("realloc::fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capicity = newcapicity;
	}
}
void SLprint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SLpushback(SL* ps, SLDataType x)
{
	assert(ps);
	SLcheckcapicity(ps);
	//ps->a[ps->size] = x;
	//ps->size++;
	SLinsert(ps, ps->size, x);
}
void SLpopback(SL* ps)
{
	/*assert(ps->size > 0);
	ps->size--;*/
	SLerase(ps, ps->size-1);
}
void SLpushfront(SL* ps, SLDataType x)
{
	assert(ps);
	SLcheckcapicity(ps);
	/*int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;*/
	SLinsert(ps, 0, x);
}
void SLpopfront(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);
	/*int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;*/
	SLerase(ps, 0);
}

void SLinsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLcheckcapicity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLerase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;

}

int SLfind(SL* ps, int pos, int begin)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == pos)
		{
			return i;
		}
	}
	return -1;
}