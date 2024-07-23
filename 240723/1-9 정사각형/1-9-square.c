#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a == 10)
            {
                a = 1;
            }
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}