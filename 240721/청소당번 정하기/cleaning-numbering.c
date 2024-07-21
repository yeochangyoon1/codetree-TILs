#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count1 = 0, count2 = 0, count3 = 0;
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 12 == 0)
        {
            count3++;
        }
        else if(i % 3 == 0)
        {
            count2++;
        }
        else if(i % 2 == 0)
        {
            count1++;
        }
    }
    printf("%d %d %d", count1, count2, count3);
    return 0;
}