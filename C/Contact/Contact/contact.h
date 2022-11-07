#pragma once

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX_PEO 100
#define MAX_NAME 10
#define MAX_SEC 6
#define MAX_TELE 12


struct PeopInfo
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEC];
	char tele[MAX_TELE];
};

struct Contact
{
	//struct PeopInfo peo[MAX_PEO];
	struct PeopInfo* peo;
	int sz;
	int capicity;
};

void Initcontact(struct Contact* pc);

void addcontact(struct Contact* pc);

void showcontact(const struct Contact* pc);

void deleatecontact(struct Contact* pc);

void searchcontact(const struct Contact* pc);

void modifycontact(struct Contact* pc);

void sortcontact(const struct Contact* pc);

void destorycontact(struct Contact* pc);

void savecontact(struct Contact* pc);

//void loadcontact(struct Contact* pc);
