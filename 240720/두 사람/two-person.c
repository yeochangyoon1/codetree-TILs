#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c1, c2;
    scanf("%d %c %d %c", &a, &c1, &b, &c2);
    printf("%d", (a >= 19 && c1 == 'M') || (b >= 19 && c2 == 'M'));
    return 0;
}