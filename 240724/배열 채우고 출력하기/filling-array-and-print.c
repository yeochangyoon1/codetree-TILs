#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %c", &c[i]);
    }
    for(int i = 9; i >= 0; i--)
    {
        printf("%c", c[i]);
    }
    return 0;
}