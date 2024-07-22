#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n / 2; i++)
    {
        printf("*\n");
        for(int j = 1; j <= 2 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    if(n % 2 == 1)
    {
        printf("*");
    }
    return 0;
}