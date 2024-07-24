#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 0)
        {
            for(int j = i - 1; j >= 0; j--)
            {
                printf("%d ", n[j]);
            }
            return 0;
        }
    }
    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", n[i]);
    }
    return 0;
}