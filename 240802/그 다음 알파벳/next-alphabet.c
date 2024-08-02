#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    scanf("%c", &c);
    if(c >= 97 && c < 122)
    {
        printf("%c", c + 1);
    }
    else if(c == 122)
    {
        printf("a");
    }
    return 0;
}