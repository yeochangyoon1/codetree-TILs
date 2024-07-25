#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int number[10];
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &number[i]);
    }
    int min = 100000;
     for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(number[i] < number[j])
            {
                int min1;
                min1 = number[j] - number[i];
                if(min > min1)
                {
                    min = min1;
                }
            }
        }
    }
    printf("%d", min);
    return 0;
}