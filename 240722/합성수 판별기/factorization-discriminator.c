#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count > 0)
    {
        printf("C");
    }
    else
    {
        printf("N");
    }
    return 0;
}