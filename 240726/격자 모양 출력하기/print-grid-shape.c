#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10][10];
    int r[100];
    int c[100];
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            n[i][j] = 0;
        }
    }
    for(int i = 0; i < b; i++)
    {
        scanf(" %d %d", &r[i], &c[i]);
        n[r[i]-1][c[i]-1] = r[i] * c[i];
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