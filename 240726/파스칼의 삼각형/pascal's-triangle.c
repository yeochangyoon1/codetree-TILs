#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[15][15];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        a[i][0] = 1;
        for(int j = 1; j < 5; j++)
        {
            a[i][j] = 0;
        }
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}