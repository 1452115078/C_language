#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//#include <string>

//int main()
//{
//	std::string name;
//	std::cout << "What is your name? ";
//	getline(std::cin, name);
//	std::cout << "Hello, " << name << "!\n";
//}
//
struct peo
{
	int age;
	char name[10];
	int tall;
}s1;
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		//perror(fopen);
		return 1;
	}
	//
	struct peo s1 = { 20,"chencehn",180 };
	fscanf(stdin, "%d %s %d", &(s1.age), s1.name, &(s1.tall));
	fprintf(stdout, "%d %s %d", s1.age, s1.name, s1.tall);

	

	fclose(pf);
	pf = NULL;
	return 0;
}