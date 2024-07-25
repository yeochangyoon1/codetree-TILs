#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int b;

    scanf("%d %d", &a[0], &b);
    int count[10] = {0};
    for(int i = 1; i < 100; i++)
    {
        a[i] = a[i - 1] / b;
        count[(a[i - 1] % b)]++;
        if(a[i] <= 1)
        {
            break;
        }
    }
    int sum = 0;
    for(int i = 0; i < b; i++)
    {
        sum = sum + (count[i] * count[i]);
    }
    printf("%d", sum);
    return 0;
}