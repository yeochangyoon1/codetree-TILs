#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &b, &a);
    int i = b;
    while(i >= a)
    {
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}