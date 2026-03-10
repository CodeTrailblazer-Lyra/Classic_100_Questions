// C 练习实例5 - 三个数由小到大
// 题目：输入三个整数 x、y、z，请把这三个数由小到大输出。

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y, z;

    printf("输入三个整数 x,y,z（用逗号分隔）:\n");
    scanf("%d,%d,%d", &x, &y, &z);

    // 使用冒泡排序思想进行三数排序
    if (x > y) swap(&x, &y);
    if (x > z) swap(&x, &z);
    if (y > z) swap(&y, &z);

    printf("从小到大排序结果: %d %d %d\n", x, y, z);
    return 0;
}
