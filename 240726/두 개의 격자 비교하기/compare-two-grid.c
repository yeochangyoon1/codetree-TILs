#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n1[10][10];
    int n2[10][10];
    int n3[10][10];
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf(" %d", &n1[i][j]);
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf(" %d", &n2[i][j]);
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(n1[i][j] == n2[i][j])
            {
                n3[i][j] = 0;
            }
            else
            {
                n3[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("%d ", n3[i][j]);
        }
        printf("\n");
    }
    return 0;
}