#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 1; i <= 5; i++)
    {
        int n;
        scanf(" %d", &n);
        if(n % 3 != 0)
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}