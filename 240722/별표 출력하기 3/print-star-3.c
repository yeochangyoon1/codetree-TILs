#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
    {
        for(int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}