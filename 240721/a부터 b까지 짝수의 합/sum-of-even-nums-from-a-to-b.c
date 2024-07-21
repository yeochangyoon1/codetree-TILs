#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    for(int i = a; i <= b; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}