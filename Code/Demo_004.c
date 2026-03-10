// C 练习实例4 - 判断当年第几天
// 题目：输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>

int main() {
    int year = 1900, month = 1, day = 1, sumDay = 0;
    int year_1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year_2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("输入年月日(2000/8/1)：");
    scanf("%d/%d/%d", &year, &month, &day);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        for (int i = 0; i < month - 1; i++)
            sumDay += year_1[i];
    else
        for (int i = 0; i < month - 1; i++)
            sumDay += year_2[i];

    printf("%d年%d月%d日是这一年的第%d天\n", year, month, day, sumDay + day);

    return 0;
}
