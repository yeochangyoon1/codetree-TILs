#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);
    printf((a % 13 == 0 || a % 19 == 0) ? "True" : "False");
    return 0;
}