// C 练习实例18 - s=a+aa+aaa...
// 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

#include <stdio.h>

int main() {
    int a, n;
    long long sum = 0;
    long long term = 0;

    printf("请输入两个数，一个为a，一个为n，这个式子为a+aa+aaa+...（共n项）：");
    scanf("%d %d", &a, &n);

    for (int i = 1; i <= n; i++) {
        term = term * 10 + a;
        sum += term;
    }

    printf("和等于：%lld\n", sum);
    return 0;
}
