#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int a;
        scanf(" %d", &a);
        if(a % 2 == 1 && a % 3 == 0)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}