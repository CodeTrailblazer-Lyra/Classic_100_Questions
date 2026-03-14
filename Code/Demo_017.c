// C 练习实例17 - 统计字母、数字等
// 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include <stdio.h>

int main() {
    char input;
    int latterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;

    printf("输入一串字符：");

    while ((input = getchar()) != '\n') {
        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
            latterCount++;
        else if (input == ' ')
            spaceCount++;
        else if (input >= '0' && input <= '9')
            digitCount++;
        else
            otherCount++;
    }

    printf("字母有：%d，空格有：%d，数字有：%d，其他的有：%d\n", latterCount, spaceCount, digitCount, otherCount);

    return 0;
}
