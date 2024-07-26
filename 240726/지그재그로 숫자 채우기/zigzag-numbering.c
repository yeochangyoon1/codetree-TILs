#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100][100];
    int num = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = num;
            num++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(j % 2 == 0)
            {
                printf("%d ", a[j][i]);
            }
            else
            {
                printf("%d ", a[j][n - 1 - i]);
            }
        }
        printf("\n");
    }
    return 0;
}