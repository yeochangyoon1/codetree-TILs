#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2;
    scanf("%c %c", &c1, &c2);
    printf("%d ", c1 + c2);
    if(c1 > c2)
    {
        printf("%d", c1 - c2);
    }
    else
    {
        printf("%d", c2 - c1);
    }
    return 0;
}