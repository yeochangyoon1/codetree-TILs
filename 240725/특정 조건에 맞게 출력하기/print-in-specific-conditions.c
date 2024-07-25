#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100];
    for(int i = 0; i < 100; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 0)
        {
            break;
        }
    }
    for(int i = 0; i < 100; i++)
    {
        if(n[i] == 0)
        {
            break;
        }
        else if(n[i] % 2 == 1)
        {
            printf("%d ", n[i] + 3);
        }
        else if(n[i] % 2 == 0)
        {
            printf("%d ", n[i] / 2);
        }
    }
    return 0;
}