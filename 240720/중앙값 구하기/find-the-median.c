#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        if(c > a)
        {
            printf("%d", a);
        }
        else if(c > b)
        {
            printf("%d", c);
        }
        else
        {
            printf("%d", b);
        }
    }
    else
    {
        if(c > b)
        {
            printf("%d", b);
        }
        else if(c > a)
        {
            printf("%d", c);
        }
        else
        {
            printf("%d", a);
        }
    }
    return 0;
}