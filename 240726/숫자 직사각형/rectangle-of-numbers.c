#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100][100];
    int a, b;
    scanf("%d %d", &a, &b);
    int number = 1;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            n[i][j] = number;
            printf("%d ", n[i][j]);
            number++;

        }
        printf("\n");
    }

    return 0;
}