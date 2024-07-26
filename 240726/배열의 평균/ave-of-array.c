#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[2][4];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf(" %d", &n[i][j]);
        }
    }
    double sum = 0;
    for(int i = 0; i < 2; i++)
    {
        sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum += n[i][j];
        }
        printf("%.1f ", sum / 4);
    }
    printf("\n");
    for(int i = 0; i < 4; i++)
    {
        sum = 0;
        for(int j = 0; j < 2; j++)
        {
            sum += n[j][i];
        }
        printf("%.1f ", sum / 2);
    }
    printf("\n");
    sum = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum += n[i][j];
        }
    }
    printf("%.1f", sum / 8);
    return 0;
}