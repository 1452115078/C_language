#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void rotate(int* nums, int k)
{

    int i = 0;
    int num[2 * 10];
    k %= 10;
    memmove(num, nums, 40);
    memmove(num + 10, nums, 40);
    if (k % 2 == 1)
    {
        printf("[");
        for (i = 0; i < 10; i++)
        {
            if (i == 9)
            {
                printf("%d", num[i + k + 1]);
            }
            else
            {
                printf("%d,", num[i + k + 1]);
            }
        }
        printf("]\n");
    }
    else
    {
        printf("[");
        for (i = 0; i < 10; i++)
        {
            if (i == 9)
            {
                printf("%d", num[i + k]);
            }
            else
            {
                printf("%d,", num[i + k]);
            }
        }
        printf("]\n");
    }
}
int main()
{
	int a1[10] = { 1,2,3,4,5,6,7,8,9,0 };
    rotate(a1, 3);
	/*int a2[20];
	memmove(a2, a1, 40);
	memmove(a2+10, a1, 40);*/
	return 0;
}
//int main()
//{
//    int nums[9];
//    int n = 0;
//    int i = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    int sum1 = ((1 + n) * n) / 2;
//    for (i = 0; i < 9; i++)
//    {
//        scanf("%d", &nums[i]);
//    }
//    for (i = 0; i < 9; i++)
//    {
//        sum += nums[i];
//    }
//	printf("%d ", sum1-sum);
//    return 0;
//}
//struct peo
//{
//    int n;
//    double c;
//    double math;
//    double eng;
//};
//int main()
//{
//    struct peo s;
//    scanf("%d;%lf,%lf,%lf", &(s.n), &(s.c), &(s.math), &(s.eng));
//    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", s.n, s.c, s.math, s.eng);
//
//    return 0;
//}