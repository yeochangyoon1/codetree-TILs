#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    printf(((n % 2 != 0 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0)) ? "true" : "false");
    return 0;
}