#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int a, b;
        int prod = 1;
        scanf(" %d %d", &a, &b);
        for(int j = a; j <= b; j++)
        {
            prod *= j;
        }
        printf("%d\n", prod);
    }
    return 0;
}