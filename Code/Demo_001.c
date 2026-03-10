// C 练习实例1 - 组无重复数字的数
// 题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>

int main() {
    int count = 0;
    for (int x = 1; x <= 4; x++) {
        for (int y = 1; y <= 4; y++) {
            for (int z = 1; z <= 4; z++) {
                if (x != y && y != z && x != z) {
                    printf("%d%d%d\n", x, y, z);
                    count++;
                }
            }
        }
    }

    printf("能组成%d个互不相同且无重复数字的三位数\n", count);

    return 0;
}
