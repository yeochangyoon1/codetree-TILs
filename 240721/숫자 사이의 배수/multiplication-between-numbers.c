#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    int count = 0;
    for(int i = a; i <= b; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            sum += i;
            count++;
        }
    }
    printf("%d %.1f", sum, (double)sum / count);
    return 0;
}