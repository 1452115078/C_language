#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void checkcapicity(struct Contact* pc);

void loadcontact(struct Contact* pc)
{
	assert(pc);

	FILE* pfr = fopen("data.txt", "rb");
	if (pfr == NULL)
	{
		perror("loadcontact::fopen");
		return;
	}
	//
	struct PeopInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeopInfo), 1, pfr)==1)
	{
		checkcapicity(pc);
		pc->peo[pc->sz] = tmp;
		pc->sz++;
	}

	fclose(pfr);
	pfr = NULL;
}

//void Initcontact(struct Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc->peo, 0, 100 * sizeof(struct PeopInfo));
//}
// 
//动态
void Initcontact(struct Contact* pc)
{
	assert(pc);
	pc->sz = 0;

	pc->peo = (struct PeopInfo*)malloc(3*sizeof(struct PeopInfo));
	if (pc->peo == NULL)
	{
		return;
	}
	else
	{
		//开辟空间成功
		pc->capicity = 3;
		//加载通讯录
		loadcontact(pc);
	}
}

static int Findcontactbyname(struct Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->peo[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void checkcapicity(struct Contact* pc)
{
	assert(pc);

	if (pc->sz == pc->capicity)
	{
		//扩容
		struct PeopInfo* ptr = (struct PeopInfo*)realloc(pc->peo, 3 * sizeof(struct PeopInfo) + 2 * sizeof(struct PeopInfo));
		if (ptr == NULL)
		{
			perror("checkcapicity");
			return;
		}
		else
		{
			pc->capicity += 2;
			pc->peo = ptr;
			printf("扩容成功\n");
		}
	}
}

void addcontact(struct Contact* pc)
{
	assert(pc);
	checkcapicity(pc);

	printf("请输入年龄>");
	scanf("%d", &(pc->peo[pc->sz].age));
	printf("请输入姓名>");
	scanf("%s", pc->peo[pc->sz].name);
	printf("请输入性别>");
	scanf("%s", pc->peo[pc->sz].sex);
	printf("请输入电话号码>");
	scanf("%s", pc->peo[pc->sz].tele);
	pc->sz++;
	printf("添加联系人成功\n");

}
void showcontact(const struct Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-5s\t%-10s\t%-6s\t%-12s\n", "年龄", "姓名", "性别", "电话号码");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-5d\t%-10s\t%-6s\t%-12s\n", pc->peo[i].age,
			pc->peo[i].name,
			pc->peo[i].sex,
			pc->peo[i].tele);
	}
}


void deleatecontact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入你要删除人的姓名>");
	scanf("%s", name);
	int ret = Findcontactbyname(pc, name);
	if (-1 == ret)
	{
		printf(">>找不到您需要的联系人<<\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < pc->sz - 1; j++)
		{
			pc->peo[j] = pc->peo[j + 1];
		}
		pc->sz--;
		printf(">>删除成功<<\n");
	}
}

void searchcontact(const struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入你要查找人的姓名>");
	scanf("%s", name);
	int ret = Findcontactbyname(pc, name);
	if (-1 == ret)
	{
		printf(">>找不到您需要的联系人<<\n");
	}
	else
	{
		printf("查找成功,详细信息如下\n");
		Sleep(500);
		printf("%-5s\t%-10s\t%-6s\t%-12s\n", "年龄", "姓名", "性别", "电话号码");
		printf("%-5d\t%-10s\t%-6s\t%-12s\n", pc->peo[ret].age,
			pc->peo[ret].name,
			pc->peo[ret].sex,
			pc->peo[ret].tele);
	}
}

void modifycontact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入你要修改人的姓名>");
	scanf("%s", name);
	int ret = Findcontactbyname(pc, name);
	if (-1 == ret)
	{
		printf(">>找不到您需要的联系人<<\n");
	}
	else
	{
		printf("查找成功,请您修改\n");
		printf("请输入年龄>");
		scanf("%d", &(pc->peo[ret].age));
		printf("请输入姓名>");
		scanf("%s", pc->peo[ret].name);
		printf("请输入性别>");
		scanf("%s", pc->peo[ret].sex);
		printf("请输入电话号码>");
		scanf("%s", pc->peo[ret].tele);
		printf(">>修改成功<<\n");
	}
}
int cmp_by_age(const void* e1, const void* e2)
{
	return (((struct PeopInfo*)e1)->age) - (((struct PeopInfo*)e2)->age);
		
}
void sortcontact(const struct Contact* pc)
{
	assert(pc);

	qsort(pc->peo, pc->sz, sizeof(struct PeopInfo), cmp_by_age);
	printf("排序成功\n");
}

void destorycontact(struct Contact* pc)
{
	assert(pc);
	//pc->sz = 0;
	//pc->capicity = 0;
	free(pc->peo);
	pc->peo = NULL;
}

void savecontact(struct Contact* pc)
{
	assert(pc);

	FILE* pfw = fopen("data.txt", "wb");
	if (pfw == NULL)
	{
		perror("savecontact::fopen");
		return 1;
	}
	//
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->peo+i, sizeof(struct PeopInfo), 1, pfw);

	}

	fclose(pfw);
	pfw = NULL;
}