#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int count = 0;
    while(1)
    {
        if(n % 2 == 0)
        {
            n = n * 3 + 1;
        }
        else if(n % 2 == 1)
        {
            n = n * 2 + 2;
        }
        count++;
        if(n >= 1000)
        {
            printf("%d", count);
            break;
        }
    }
    return 0;
}