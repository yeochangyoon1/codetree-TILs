#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c[5][3];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf(" %c", &c[i][j]);
            printf("%c ", c[i][j] - 32);
        }
        printf("\n");
    }
    
    return 0;
}