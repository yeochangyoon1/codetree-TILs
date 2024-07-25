#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int number[100];

    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &number[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(number[i] < number[j])
            {
                int max = number[j];
                number[j] = number[i];
                number[i] = max;
            }
        }
    }
    printf("%d %d", number[0], number[1]);
    return 0;
}