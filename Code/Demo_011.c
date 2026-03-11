// C 练习实例11 - 斐波那契
// 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

#include <stdio.h>

int main() {
    long long month1 = 1, month2 = 1;
    long long current;

    printf("第1个月的兔子总数：%lld 对\n", month1);
    printf("第2个月的兔子总数：%lld 对\n", month2);

    for (int month = 3; month <= 40; month++) {
        current = month1 + month2;
        printf("第%d个月的兔子总数：%lld 对\n", month, current);

        month1 = month2;
        month2 = current;
    }

    return 0;
}
