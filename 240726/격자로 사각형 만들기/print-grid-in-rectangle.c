#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10][10];
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        n[0][i] = 1;
        n[i][0] = 1;
    }
    for(int i = 1; i < a; i++)
    {
        for(int j = 1; j < a; j++)
        {
            n[i][j] = n[i - 1][j - 1] + n[i - 1][j] + n[i][j - 1];
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}