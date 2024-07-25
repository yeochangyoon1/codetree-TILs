#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
    }
    printf("%d", n[2] + n[4] + n[9]);
    return 0;
}