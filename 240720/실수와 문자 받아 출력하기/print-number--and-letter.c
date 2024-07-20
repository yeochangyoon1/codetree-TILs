#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    double a;
    double b;
    scanf("%c %lf %lf", &c, &a, &b);
    printf("%c\n", c);
    printf("%.2f\n", a);
    printf("%.2f", b);
    return 0;
}