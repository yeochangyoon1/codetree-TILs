#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        int n;
        scanf(" %d", &n);
        if(n >= 0 && n <= 200)
        {
            sum += n;
            count++;
        }
    }
    printf("%d %.1f", sum, (double)sum / count);
    return 0;
}