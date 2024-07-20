#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    char c1, c2, c3;
    scanf("%c %d %c %d %c %d", &c1, &a, &c2, &b, &c3, &c);
    int count = 0;

    if(c1 == 'Y' && a >= 37)
    {
        count++;
    }
    if(c2 == 'Y' && b >= 37)
    {
        count++;
    }
    if(c3 == 'Y' && c >= 37)
    {
        count++;
    }

    if(count >= 2)
    {
        printf("E");
    }
    else
    {
        printf("N");
    }
    return 0;
}