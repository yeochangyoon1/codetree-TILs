#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int quot = n;
    for(int i = 1; i <= n; i++)
    {
        quot /= i;
        if(quot <= 1)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}