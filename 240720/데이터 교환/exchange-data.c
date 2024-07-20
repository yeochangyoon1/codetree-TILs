#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;
    int temp1 = b;
    int temp2 = c;
    b = a;
    c = temp1;
    a = temp2;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);
    return 0;
}