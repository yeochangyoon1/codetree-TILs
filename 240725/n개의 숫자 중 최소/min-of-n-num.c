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
    int min = number[0];
    for(int i = 1; i < n; i++)
    {
        if(min > number[i])
        {
            min = number[i];
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(number[i] == min)
        {
            count++;
        }
    }
    printf("%d %d", min, count);
    return 0;
}