#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100];
    scanf("%d", &n[1]);
    n[0] = 1;
    for(int i = 2; i < 100; i++)
    {
        n[i] = n[i - 1] + n[i - 2];
    }
    for(int i = 0; i < 100; i++)
    {
        if(n[i] > 100)
        {
            printf("%d", n[i]);
            break;
        }
        printf("%d ", n[i]);
    }
    return 0;
}