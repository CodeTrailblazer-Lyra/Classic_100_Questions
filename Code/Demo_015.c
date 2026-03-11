// C 练习实例15 - (a>b)?a:b
// 题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

#include <stdio.h>

int main() {
    int course = 0;
    char grade;
    printf("输入一个分数：");
    scanf("%d", &course);

    grade = course >= 90 ? 'A' : course >= 60 ? 'B' : 'C';

    printf("评价是：%c\n", grade);

    return 0;
}
