#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
    }
    int max = n[0];
    for(int i = 1; i < 10; i++)
    {
        if(max < n[i])
        {
            max = n[i];
        }
    }
    printf("%d", max);
    return 0;
}