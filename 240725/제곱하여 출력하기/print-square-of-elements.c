#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.k
    int n[100];
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf(" %d", &n[i]);
        printf("%d ", n[i] * n[i]);
    }
    return 0;
}