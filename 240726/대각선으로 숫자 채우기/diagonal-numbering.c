#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int a[100][100];
    scanf("%d %d", &n, &m);
    int num = 1;
    for(int i = 0; i < m + n - 1; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j >= n || i - j >= m)
            {
                continue;
            }
            a[j][i - j] = num;
            num++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}