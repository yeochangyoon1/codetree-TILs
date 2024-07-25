#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100];
    int count[9] = {0};
    for(int i = 0; i < 100; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 0)
        {
            break;
        }
        count[(n[i] / 10) - 1]++;
    }
    for(int i = 0; i < 9; i++)
    {
        printf("%d - %d\n", i + 1, count[i]);
    }
    return 0;
}