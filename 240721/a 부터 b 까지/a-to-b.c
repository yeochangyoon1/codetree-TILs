#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d ", a);
    while(a < b)
    {
        if(a % 2 == 1)
        { 
            a *= 2;
        }
        else
        {
            a += 3;
        }
        printf("%d ", a);
    }
    return 0;
}