#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
    }
    int sum = 0;
    for(int i = 1; i < 10; i += 2)
    {
        sum += n[i];
    }
    double sum2 = 0;
    for(int i = 2; i < 10; i += 3)
    {
        sum2 += n[i];
    }
    printf("%d %.1f", sum, sum2 / 3);
    return 0;
}