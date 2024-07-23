#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 10 + 2 * i - 1; j <= 10 + 2 * (i + n - 1) - 1; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}