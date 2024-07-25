#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int price[1000];
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &price[i]);
    }
    int max = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(price[i] < price[j])
            {
                int max1;
                max1 = price[j] - price[i];
                if(max < max1)
                {
                    max = max1;
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}