#define _CRT_SECURE_NO_WARNINGS
/*
https://www.nowcoder.com/practice/ec44d4ff8c794b2f9205bdddbde96817?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=0&sourceUrl=
第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)

从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
接下来一行输入k，表示要执行k次操作（1≤k≤5）。接下来有k行，每行包括一个字符t和两个数a和b，中间用空格格分隔，t代表需要执行的操作，当t为字符'r'时代表进行行变换，当t为字符'c'时代表进行列变换，a和b为需要互换的行或列（1≤a≤b≤n≤10，1≤a≤b≤m≤10）。

提示：当t为别的字符时不需要处理
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

