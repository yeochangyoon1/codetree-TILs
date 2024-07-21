#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count1 = 0, count2 = 0;
    for(int i = 1; i <= 10; i++)
    {
        int n;
        scanf(" %d", &n);

        if(n % 3 == 0)
        {
            count1++;
        }
        if(n % 5 == 0)
        {
            count2++;
        }
    }
    printf("%d %d", count1, count2);
    return 0;
}