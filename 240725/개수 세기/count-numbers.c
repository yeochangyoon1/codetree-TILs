#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int m[100];
    scanf("%d %d", &n, &m[0]);
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        scanf(" %d", &m[i]);
        if(m[i] == m[0])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}