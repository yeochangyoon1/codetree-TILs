#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int number[1000];
    int count[1000] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &number[i]);
        count[number[i] - 1]++;
    }
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        if(count[number[i] - 1] == 1)
        {
            max = number[i];
            break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        
        if(count[number[i] - 1] == 1)
        {
            if(max < number[i])
            {
                max = number[i];
            }
        }
    }
    printf("%d", max);
    return 0;
}