#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100];
    int i = 0;
    while(1)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 0)
        {
            break;
        }
        i++;
    }
    printf("%d", n[i - 1] + n[i - 2] + n[i - 3]);
    return 0;
}