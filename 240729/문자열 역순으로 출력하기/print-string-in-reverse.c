#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[4][21];

    for(int i = 0; i < 4; i++)
    {
        scanf(" %s", str[i]);
    }
    for(int i = 3; i >= 0; i--)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}