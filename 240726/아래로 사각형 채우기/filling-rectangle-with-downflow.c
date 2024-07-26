#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10][10];
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            n[i][j] = (i + 1) + a * j;
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}