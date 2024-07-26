#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n1[3][3];
    int n2[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf(" %d", &n1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf(" %d", &n2[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", n1[i][j] * n2[i][j]);
        }
        printf("\n");
    }
    return 0;
}