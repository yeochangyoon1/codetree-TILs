#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int i1 = i % 10;
        int i2 = (i / 10) % 10;
        if(i % 3 == 0)
        {
            printf("0 ");
        }
        else if(i1 == 3 || i1 == 6 || i1 == 9)
        {
            printf("0 ");
        }
        else if(i2 == 3 || i2 == 6 || i2 == 9)
        {
            printf("0 ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}