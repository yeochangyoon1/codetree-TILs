#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char c = 'A';
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= n + 1 - i; j++)
        {
            if(c > 'A' + 25)
            {
                c = 'A';
            }
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}