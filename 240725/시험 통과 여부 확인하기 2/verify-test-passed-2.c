#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int student[10][4];
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            scanf(" %d", &student[i][j]);
            sum += student[i][j];
        }
        if(sum / 4 >= 60)
        {
            printf("pass\n");
            count++;
        }
        else
        {
            printf("fail\n");
        }
    }
    printf("%d", count);
    return 0;
}