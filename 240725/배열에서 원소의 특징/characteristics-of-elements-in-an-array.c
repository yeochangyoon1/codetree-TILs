#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] % 3 == 0)
        {
            printf("%d", n[i - 1]);
            return 0;
        }
    }
    return 0;
}