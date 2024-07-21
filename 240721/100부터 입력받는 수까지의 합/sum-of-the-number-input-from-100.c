#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = n; i <= 100; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}