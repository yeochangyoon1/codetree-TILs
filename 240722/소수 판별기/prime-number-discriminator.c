#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    if(n != 2 && n % 2 == 0)
    {
        printf("C");
        return 0;
    }
    for(int i = 3; i < n; i += 2)
    {
        if(n % i == 0)
        {
            printf("C");
            return 0;
        }
    }
    printf("P");
    return 0;
}