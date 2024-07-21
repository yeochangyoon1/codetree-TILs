#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 4 == 0 && !(i % 100 == 0 && i % 400 != 0))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}