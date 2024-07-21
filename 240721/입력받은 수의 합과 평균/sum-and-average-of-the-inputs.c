#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        int a;
        scanf(" %d", &a);
        sum += a;
    }
    printf("%d %.1f", sum, (double)sum / n);
    return 0;
}