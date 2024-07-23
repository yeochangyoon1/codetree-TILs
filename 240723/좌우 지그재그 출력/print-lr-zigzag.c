#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            for(int j = a; j <= a + n - 1; j++)
            {
                printf("%d ", j);
            }
            a += n - 1;
        }
        else
        {
            for(int j = i * n; j >= a + 1; j--)
            {
                printf("%d ", j);
            }
            a = i * n + 1;
        }
        printf("\n");
    }
    return 0;
}