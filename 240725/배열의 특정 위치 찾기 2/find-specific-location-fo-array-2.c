#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
        if(i % 2 == 0)
        {
            sum1 += n[i];
        }
        else
        {
            sum2 += n[i];
        }
    }
    if(sum1 > sum2)
    {
        printf("%d", sum1 - sum2);
    }
    else
    {
        printf("%d", sum2 - sum1);
    }

    return 0;
}