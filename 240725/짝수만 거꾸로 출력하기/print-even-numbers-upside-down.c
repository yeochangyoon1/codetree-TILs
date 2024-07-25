#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int t;
        scanf(" %d", &t);
        if(t % 2 == 0)
        {
            a[count] = t;
            count++;
        }
    }
    for(int i = count - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}