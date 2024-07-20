#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int width;
    int length;
    scanf("%d %d", &width, &length);
    width += 8;
    length *= 3;
    printf("%d\n%d\n%d", width, length, width * length);
    return 0;
}