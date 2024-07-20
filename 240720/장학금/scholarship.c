#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    if(a < 90)
    {
        printf("0");
    }
    else if(b >= 95)
    {
        printf("100000");
    }
    else if(b >= 90)
    {
        printf("50000");
    }
    else
    {
        printf("0");
    }
    return 0;
}