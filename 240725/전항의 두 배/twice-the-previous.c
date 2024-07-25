#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    scanf("%d %d", &n[0], &n[1]);
    for(int i = 2; i < 10; i++)
    {
        n[i] = n[i - 1] + 2 * n[i - 2];
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}