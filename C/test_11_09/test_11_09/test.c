#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6,6,12 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
		//5 ^ 6
		//101 ^ 110 = 011
	}
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if ((ret >> i) & 1 == 0)
		{
			pos = i;
			break;
		}
	}
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> pos) & 1 == 1)
		{
			num1 = num1 ^ arr[i];
		}
		else
		{
			num2 = num2 ^ arr[i];
		}
	}
	printf("%d,%d",num1,num2);
	return 0;
}