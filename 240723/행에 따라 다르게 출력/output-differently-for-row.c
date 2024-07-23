#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i % 2 == 1)
            {
                a++;
                printf("%d ", a);
            }
            else
            {
                a += 2;
                printf("%d ", a);
            }
        }
        printf("\n");
    }
    return 0;
}