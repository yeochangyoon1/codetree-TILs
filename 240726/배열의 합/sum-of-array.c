#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[4][4];
    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            scanf(" %d", &n[i][j]);
            sum += n[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}