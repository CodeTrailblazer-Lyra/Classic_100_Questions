// C 练习实例8 -  9*9 乘法表
// 题目：输出 9*9 口诀。

#include <stdio.h>

int main() {
    for (int x = 1; x <= 9; x++) {
        for (int y = 1; y <= 9; y++) {
            printf("%d x %d = %d ", x, y, x * y);
            if (x == y) {
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
