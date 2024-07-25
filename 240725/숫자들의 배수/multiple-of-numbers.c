#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int count = 0;
    int i = 1;
    while(count != 2)
    {
        printf("%d ", i * n);
        if((i * n) % 5 == 0)
        {
            count++;
        }
        i++;
    }
    return 0;
}