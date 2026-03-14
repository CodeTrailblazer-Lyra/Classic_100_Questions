// C 练习实例16 - 公约数＆公倍数
// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b; // 把b存进temp里面
        b = a % b; // 一直到b = 0
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int m, n;
    printf("请输入两个正整数 m 和 n: \n");
    scanf("%d %d", &m, &n);
    // 计算最大公约数和最小公倍数
    int gcd_value = gcd(m, n);
    int lcm_value = lcm(m, n);
    // 打印结果
    printf("最大公约数 (GCD) = %d\n", gcd_value);
    printf("最小公倍数 (LCM) = %d\n", lcm_value);
}
