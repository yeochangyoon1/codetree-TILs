#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
    }
    int max;
    for(int i = 0; i < 10; i++)
    {
        if(n[i] < 500)
        {
            max = n[i];
            break;
        }
    }
    int min;
    for(int i = 0; i < 10; i++)
    {
        if(n[i] > 500)
        {
            min = n[i];
            break;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(n[i] < 500)
        {
            if(max < n[i])
            {
                max = n[i];
            }
        }
        if(n[i] > 500)
        {
            if(min > n[i])
            {
                min = n[i];
            }
        }
    }
    printf("%d %d", max, min);
    return 0;
}