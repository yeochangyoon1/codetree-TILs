#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    scanf("%c", &c);
    if(c > 'a' && c <= 'z')
    {
        printf("%c", c - 1);
    }
    else if(c == 'a')
    {
        printf("z");
    }
    return 0;
}