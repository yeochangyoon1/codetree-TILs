#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a = 2;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a == 10)
            {
                a = 2;
            }
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }
    return 0;
}