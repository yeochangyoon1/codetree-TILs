#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    for(int i = 1; i <= 10; i++)
    {
        int n;
        scanf(" %d", &n);
        if(n % 2 == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}