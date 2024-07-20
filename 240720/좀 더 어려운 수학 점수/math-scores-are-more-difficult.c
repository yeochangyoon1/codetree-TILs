#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > c)
    {
        printf("A");
    }
    else if(a < c)
    {
        printf("B");
    }
    else if(b > d)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }
    return 0;
}