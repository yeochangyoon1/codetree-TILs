#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100];
    for(int i = 0; i < 100; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 999 || n[i] == -999)
        {
            break;
        }
    }
    int max = n[0];
    int min = n[0];
    for(int i = 0; i < 100; i++)
    {
        if(n[i] == 999 || n[i] == -999)
        {
            break;
        }
        if(max < n[i])
        {
            max = n[i];
        }
        if(min > n[i])
        {
            min = n[i];
        }
    }
    printf("%d %d", max, min);
    return 0;
}