#define _CRT_SECURE_NO_WARNINGS
/*
https://www.nowcoder.com/practice/ec44d4ff8c794b2f9205bdddbde96817?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=0&sourceUrl=
��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ��� (1��n��10,1��m��10)

��2��n+1�У�ÿ������m����������Χ-231~231-1�����ÿո�ָ���������n*m��������ʾ��һ�������е�Ԫ�ء�
������һ������k����ʾҪִ��k�β�����1��k��5������������k�У�ÿ�а���һ���ַ�t��������a��b���м��ÿո��ָ���t������Ҫִ�еĲ�������tΪ�ַ�'r'ʱ��������б任����tΪ�ַ�'c'ʱ��������б任��a��bΪ��Ҫ�������л��У�1��a��b��n��10��1��a��b��m��10����

��ʾ����tΪ����ַ�ʱ����Ҫ����
*/

//#include<stdio.h>
//int main() 
//{
//    int s[2][2];
//    for (int i = 0; i < 2; i++) 
//    {
//        for (int j = 0; j < 2; j++) 
//        {
//            scanf("%d", &s[i][j]);
//        }
//    }
//    int t = 0;
//    char flag = 'r';
//    int c1 = 0, c2 = 0;
//    int temp = 0;
//    scanf("%d ", &t);
//    while (t) 
//    {
//        scanf(" %c %d %d", &flag, &c1, &c2);
//        c1--; c2--;
//        if (flag == 'r') 
//        {
//            for (int j = 0; j < 2; j++) 
//            {
//                temp = s[c2][j];
//                s[c2][j] = s[c1][j];
//                s[c1][j] = temp;
//            }
//        }
//
//        if (flag == 'c') 
//        {
//            for (int i = 0; i < 2; i++) 
//            {
//                temp = s[i][c2];
//                s[i][c2] = s[i][c1];
//                s[i][c1] = temp;
//            }
//        }
//        t--;
//    }
//
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//            printf("%d ", s[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

