#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    scanf("%d %d", &a, &b);

    int c = a > b ? a : b;
    printf("%d", c);
    return 0;
}