// C 练习实例16 - 公约数＆公倍数
// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
#include <stdio.h>

int main() {
    int m = 0, n = 0, gcd_value = 0, lcm_value = 0;
    scanf("%d %d", &m, &n);

    int original_m = m;
    int original_n = n;

    int min_num = (m > n) ? n : m;
    for (int i = 1; i <= min_num; i++) {
        if (m % i == 0 && n % i == 0) {
            gcd_value = i;
        }
    }

    lcm_value = (original_m * original_n) / gcd_value;

    printf("%d和%d的最大公约数为：%d\n", original_m, original_n, gcd_value);
    printf("%d和%d的最小公倍数为：%d\n", original_m, original_n, lcm_value);

    return 0;
}
