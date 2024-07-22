#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    int n;
    scanf("%d", &n);
    while(1)
    {
        if(n == 1)
        {
            break;
        }

        if(n % 2 == 0)
        {
            n /= 2;
            count++;
        }
        else if(n % 2 == 1)
        {
            n = n * 3 + 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}