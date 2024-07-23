#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    scanf("%d %d", &start, &end);
    int count1 = 0;
    int count2 = 0;
    for(int i = start; i <= end; i++)
    {
        int count1 = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count1++;
            }
        }
        if(count1 == 3)
        {
            count2++;
        }
    }
    printf("%d", count2);
    return 0;
}