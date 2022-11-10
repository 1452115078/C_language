#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define  SWAP_BIT(n)   ((n&0xaaaaaa)>>1) + ((n&0x555555)<<1)
int main()
{
	int a = 10;
	printf("%d\n", SWAP_BIT(a));
	printf("%d\n", SWAP_BIT(SWAP_BIT(a)));
	return 0;
}
//#define OFFSET(c_type,m_name)     (int)&(((c_type*)0)->m_name)
//struct s
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	printf("%d\n", OFFSET(struct s, a));
//	printf("%d\n", OFFSET(struct s, b));
//	printf("%d\n", OFFSET(struct s, c));
//
//	return 0;
//}
//#include <ctype.h>
//#include <limits.h>
//enum Status
//{
//	VILIED,
//	UNVILIED
//};
//enum Status status = UNVILIED;
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 0;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if(*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag * (*str - '0');
//		if (ret<INT_MIN || ret>INT_MAX)
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		status = VILIED;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//int main()
//{
//	int ret = my_atoi("        -123ads");
//	if (status == VILIED)
//	{
//		printf("合法打印->%d\n", ret);
//	}
//	else
//	{
//		printf("非法打印->%d\n", ret);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];//5^6
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1 == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("%d %d", num1, num2);
//	return 0;
//}