#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    int count[6] = {0};
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
        count[n[i] - 1]++;
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d - %d\n", i + 1, count[i]);
    }
    return 0;
}