#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n % 2 == 1)
        {
            continue;
        }
        else if(n % 2 == 0)
        {
            printf("%d\n", n / 2);
            count++;
        }
        
        if(count == 3)
        {
            break;
        }
    }
    return 0;
}