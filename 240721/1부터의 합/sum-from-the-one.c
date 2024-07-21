#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
        if(sum >= n)
        {
            printf("%d", i);
            break;
        }
        
    }
    return 0;
}