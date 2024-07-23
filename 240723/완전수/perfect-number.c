#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    scanf("%d %d", &start, &end);
    int count = 0;
    for(int i = start; i <= end; i++)
    {
        int sum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
            {
                count++;
            }
    }
    printf("%d", count);
    return 0;
}